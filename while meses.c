/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int mes = 1;

    while (mes <= 12) {
        switch (mes) {
            case 1:
                printf("%d - Janeiro\n", mes);
                break;
            case 2:
                printf("%d - Fevereiro\n", mes);
                break;
            case 3:
                printf("%d - Março\n", mes);
                break;
            case 4:
                printf("%d - Abril\n", mes);
                break;
            case 5:
                printf("%d - Maio\n", mes);
                break;
            case 6:
                printf("%d - Junho\n", mes);
                break;
            case 7:
                printf("%d - Julho\n", mes);
                break;
            case 8:
                printf("%d - Agosto\n", mes);
                break;
            case 9:
                printf("%d - Setembro\n", mes);
                break;
            case 10:
                printf("%d - Outubro\n", mes);
                break;
            case 11:
                printf("%d - Novembro\n", mes);
                break;
            case 12:
                printf("%d - Dezembro\n", mes);
                break;
        }
        mes++;
    }
    return 0;
}
