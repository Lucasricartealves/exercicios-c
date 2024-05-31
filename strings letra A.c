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

    printf("Digite um nome: ");
    scanf("%s", nome); 

    if (nome[0] == 'A' || nome[0] == 'a') {
        printf("O nome digitado foi: %s\n", nome); 
    } else {
        printf("O nome digitado nao comeca com 'A'.\n"); 
    }

    return 0;
}
