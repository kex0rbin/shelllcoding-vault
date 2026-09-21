#!/bin/bash
# Extract shellcode from hex from binary
# Credits and based on course material from Shellcoding 
for i in $(objdump -d $1 | grep "^ " | cut -f2) ;do echo -n "\x"$i;done;echo