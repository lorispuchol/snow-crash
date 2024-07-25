# snow-crash
To start we connect as user **_"level00"_** in the VM provided by the subject (password: **_"level00"_**).

Once connected, we have to find the password of user **_"flag00"_** through the user **_"level00"_**. Then we swith to user **_"flag00"_** and we run the `getflag` command. This command give us the flag of the corresponding level which is also the password of next **_"levelXX"_** user. And so on

We may not be able to connect to a "_**flagXX**_" account - in this case, we will have to find an alternative method, like a command injection on the program depending on its rights, for instance!

## Usefull softwares and websites
- John the ripper password cracker
- gdb
- scp (file copy through the network)
- pcap analyzer
- cloudshark.com
- dcode.fr