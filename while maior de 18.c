/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int idade, contador = 0, i = 1;

    while (i <= 5) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if (idade > 18) {
            contador++;
        }

        i++;
    }

    printf("Total de pessoas maiores que 18 anos: %d\n", contador);
    return 0;
}
