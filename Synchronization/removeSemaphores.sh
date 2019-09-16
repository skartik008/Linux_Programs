#!/bin/bash

# Shell program to remove the semaphores

for i in $(ipcs -a | grep "^s" | awk '{ print $2 }');
do
        echo "ipcrm -s $i"
        ipcrm -s $i
done
