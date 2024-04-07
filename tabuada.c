/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;
    
    // Solicitar o número entre 1 e 10
    printf("Digite um numero entre 1 e 10: ");
    scanf("%d", &numero);

    // Verificar se o número está dentro do intervalo válido
    if (numero < 1 || numero > 10) {
        printf("Numero fora do intervalo valido.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Imprimir a tabuada do número fornecido
    printf("Tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", numero, i, numero * i);
    }
 
    return 0;
}
