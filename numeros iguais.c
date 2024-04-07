/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O primeiro numero %.2f e maior que o segundo numero %.2f\n", num1, num2);
    } else if (num2 > num1) {
        printf("O segundo numero %.2f e maior que o primeiro numero %.2f\n", num2, num1);
    } else {
        printf("Numeros iguais\n");
    }
    return 0;
}
