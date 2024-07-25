# Step1
We wanted to list all the users
```bash
getent passwd
```
Or 

```bash
cat /etc/passwd
```

And we came across this

### Result
`[...]` 

`flag00:x:3000:3000::/home/flag/flag00:/bin/bash
flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash
flag02:x:3002:3002::/home/flag/flag02:/bin/bash
`

`[...]`

# Step 2
Hinted by the level00. we run john on `42hDRfypTqqnw` outside the VM

```bash
echo -n "42hDRfypTqqnw" > file && \
john file --show
```

### Result
`abcdefg` = password of **_"flag01"_**

`getflag` = `f2av5il02puano7naaf6adaaf`
