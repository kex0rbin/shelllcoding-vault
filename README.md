
# Shellcode Vault
<img width="1190" height="374" alt="shellcoding-vault" src="https://github.com/user-attachments/assets/3cdc5118-6ca5-484a-9d4a-334080d5d9f6" />

A Collection of Linux shellcodes for exploit development, testing and security research.
Shellcoding Vault is a small project, a collection of shellcodes for exploit developers and security low-level enthusiasts. 

This repository contains and will contain tested and documented shellcodes. 
Includes techniques like jmp-call-pop, RIP-relative addressing, stack-based methods that I'm still learning.

## Requirements

- `nasm` - Assembler
- `gcc` - Compiler (for testing)
- `binutils` - Contains objdump (for extraction)
- Linux x86-64

## Install

```bash
sudo apt install nasm gcc binutils
```

## Compile

```bash
nasm -f elf64 bin_sh.asm -o bin_sh.o
```

## Extract the shellcode

```bash
objcopy -O binary bin_sh.o bin_sh.bin
```

```bash
objdump -d -M intel binary.o
```

## Test
Compile:
```bash
gcc -z execstack -fno-stack-protector tester.c -o tester
```
Execute:

```bash
./tester
```

## Tested

- Ubuntu 18.04.5 (VM)

You can find the scripts used in the development and tests of these shellcodes.
