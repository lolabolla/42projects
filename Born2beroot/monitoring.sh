#!/bin/bash
wall "#Architecture: "`uname -a`"
#CPU physical: "`cat /proc/cpuinfo | grep "physical id" | wc -l`"
#vCPU: "`cat /proc/cpuinfo | grep "processor" | wc -l`"
#Memory Usage: "`free -m | grep "Mem" | awk '{ print $3 "/" $2"MB" }{ printf("(%.2f%%)", $3/$2*100) }'`"
#Disk Usage: "`df -h --total | grep "total" | awk '{ print substr($3, 1, 3) "/" $2 }{ printf("(%.2f%%)", $3/$2*100) }'`"
#CPU load: "`mpstat | grep "all" | awk '{ print 100-$13 "%" }'`"
#Last boot: "`who -b | grep "system" | awk '{ print $3 " " $4 }'`"
#LVM use: "`lsblk | grep "lvm" | wc -l | awk '{ if ($1 > 0) { print "yes" } else { print "no" }}'`"
#Connections TCP: "`ss | grep "tcp" | grep "4242" | wc -l | awk '{ print $1 " ESTABLISHED"}'`"
#User log: "`users | wc -w`"
#Network: "`/sbin/ifconfig | sed -n '2p'| awk '{ print "IP " $2 }'``/sbin/ifconfig | sed -n '4p' | awk '{ print " (" $2 ")" }'`"
#Sudo: "`journalctl -e /usr/bin/sudo | grep "COMMAND" | grep "root" | wc -l`
