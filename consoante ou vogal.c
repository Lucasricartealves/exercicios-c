/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    char letra;
    
    printf("digite uma letra minuscula:");
    scanf(" %c", &letra);
    
    switch (letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("a letra %c é uma vogal.\n, letra");
        break;
        default:
        printf("a letra %c é uma consoante.\n, letra");
    }

    return 0;
}

