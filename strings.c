/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char string[100]; 
    int contador = 0;
    int i;

    printf("Digite uma string: ");
    scanf("%s", string);

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == '1') {
            contador++;
        }
    }

    printf("O numero 1 aparece %d vezes na string.\n", contador);

    return 0;
}
