#include<stdio.h>
#include<string.h>

unsigned char welcome_payload[] = "[put the shellcode here]";

int main()
{
	printf(" == Shellcode tester!. ==\n");
	printf("Shellcode Length: %d\n",(int)strlen(welcome_payload));

	int (*ret)() = (int(*)())welcome_payload;

	ret();
}

// compile with:
// gcc -z execstack -fno-stack-protector tester.c -o name
// execute with: 
//./name