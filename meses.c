/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("O mes possui 31 dias.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mes possui 30 dias.\n");
            break;
        case 2:
            printf("O mes possui 28 dias.\n");
            break;
        default:
            printf("Mes invalido.\n");
    }
    return 0;
}
