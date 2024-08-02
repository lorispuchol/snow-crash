# Step 1
Same as the previous level, we have a binary file that we can run `level09`. And we have a token `token`
`token`

```bash
level09@SnowCrash:~$ file token 
token: data
level09@SnowCrash:~$ cat token 
f4kmm6p|=�p�n��DB�Du{��
```

# Step 2
The binary file is a program that takes a string as an argument and encode it with a addition operation. By adding to each character of the string the index of the character in the string.

For example:

```bash
level09@SnowCrash:~$ ./level09 
You need to provied only one arg.
level09@SnowCrash:~$ ./level09 aaa
abc
level09@SnowCrash:~$ ./level09 abcd
aceg
level09@SnowCrash:~$ ./level09 zzz
z{|
level09@SnowCrash:~$ ./level09 zzzzzzzzzzzzzzzzz
z{|}~�����������
```


# Step 3
We understand that we need to decode the token to get the password for the 
`flag09` user.

### Result

`f3iji1ju5yuevaus41q1afiuq�`
This is the password for the `flag09` user.

> We don't take the last carac which is not printable.

Then we can launch the `getflag` command

flag: `s5cAJpM8ev6XHw998pRWG728z`. it is the password for the `level10` user.
