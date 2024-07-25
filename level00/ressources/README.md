# Step1
Helped by the intra video. We searched the files own by `flag00` user

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
This string doesn't work as password for the `flag00` user.

Try to decode it using the Cesar cipher wheel with 15 shifts

### Result
`nottoohardhere` 

# Step 4
switch to `flag00` user. Password: `nottoohardhere`.
```bash
su flag00
```
Then run 
```bash
getflag
```

### Result
`x24ti5gi3x0ol2eh4esiuxias`


# Next Level
Let's connect as `level01` with the flag as password 
