/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100]; 
    char str2[100]; 

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    int comparacao = strcmp(str1, str2);

    if (comparacao == 0) {
        printf("As strings sao iguais.\n");
    } else if (comparacao < 0) {
        printf("A primeira string vem antes da segunda string lexicograficamente.\n");
    } else {
        printf("A primeira string vem depois da segunda string lexicograficamente.\n");
    }

    return 0;
}
