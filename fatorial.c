/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int calcular_fatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    } else {
        int fatorial = 1;
        while (numero > 1) {
            fatorial *= numero;
            numero--;
        }
        return fatorial;
    }
}

int main() {
    int numero;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial de números negativos não está definido.\n");
    } else {
        int resultado = calcular_fatorial(numero);
        printf("O fatorial de %d é: %d\n", numero, resultado);
    }

    return 0;
}
