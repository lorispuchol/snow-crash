# snow-crash
To start we connect as user `level00` in the VM provided by the subject (password: `level00`).

Once connected, we have to find the password of user `flag00` through the user `level00`. Then we swith to user `flag00` and we run the `getflag` command. This command give us the flag of the corresponding level which is also the password of next `levelXX` user. And so on

We may not be able to connect to a `flagXX` account - in this case, we will have to find an alternative method, like a command injection on the program depending on its rights, for instance!

## Usefull softwares and websites
- John the ripper password cracker
- gdb
- scp (file copy through the network)
- pcap analyzer
- cloudshark.com
- dcode.fr