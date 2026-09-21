#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void convert(char *string);

int main(int argc, char *argv[]){
    if(argc <= 1){
        return 1;
    }else{
        for (int i = 1; i < argc; i++)
        {
            convert(argv[i]);
            printf(" ");
        }
    }
    return 0;
}

void convert(char *string){
    char *s = malloc(sizeof(char) * strlen(string) + 1);
    for (int i = 0; i < strlen(string); i++)
    {
        s[i] = string[i];
    }
    s[strlen(string)] = '\0';
    for(int i = strlen(s)-1; i >= 0; i--){
        printf("%x",s[i]);
    }
    free(s);
}

// used to stack method, simple and fast tool
// compile with:
// gcc string_hex.c -o strings
// execute with: 
//./strings