# Step1
Helped by the intra video. We searched the files own by **_"flag00"_** user

```bash
find / -user flag00 2>/dev/null -ls
```
### Result
two files are listed

# Step 2
cat the content of the files
```bash
cat /usr/sbin/john && cat /rofs/usr/sbin/john
```

### Result
Same content in both files: `cdiiddwpgswtgt`

# Step 3
This string doesn't work as password for the **_"flag00"_** user.

Try to decode it using the Cesar cipher wheel with 15 shifts

### Result
`nottoohardhere` 

# Step 4
switch to **_"flag00"_** user: `su flag00`, password:  `nottoohardhere`.

Then run `getflag`

### Result
`Check flag.Here is your token : x24ti5gi3x0ol2eh4esiuxias`


# Next Level
Let's connect as **_"level01"_** with the flag for password 
