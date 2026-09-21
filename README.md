# Shellcode Vault

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
