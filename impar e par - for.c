/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int numeros[5];  
    int pares[5], impares[5]; 
    int indice_pares = 0, indice_impares = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);  

        if (numeros[i] % 2 == 0) {
            pares[indice_pares] = numeros[i];
            indice_pares++;
        } else {
            impares[indice_impares] = numeros[i];
            indice_impares++;
        }
    }

    printf("\nNúmeros digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nNúmeros pares:\n");
    for (int i = 0; i < indice_pares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\nNúmeros ímpares:\n");
    for (int i = 0; i < indice_impares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");

    return 0;
}
