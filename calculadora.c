/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o operador (+, -, * ou /): ");
    scanf(" %c", &operador); 

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Nao e possivel dividir por zero.\n");
                return 1; 
            }
            break;
        default:
            printf("Operador invalido.\n");
            return 1; 
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
