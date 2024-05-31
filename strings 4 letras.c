/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char nome[100]; 
    int i;

    printf("Digite um nome: ");
    scanf("%s", nome); 

    printf("As 4 primeiras letras do nome sao: ");
    for (i = 0; i < 4 && nome[i] != '\0'; i++) {
        printf("%c", nome[i]); 
    }
    printf("\n");

    return 0;
}
