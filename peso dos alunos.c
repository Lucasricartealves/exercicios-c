/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int numero_alunos;
    printf("Quantos alunos existem na sua academia? ");
    scanf("%d", &numero_alunos);

    if (numero_alunos <= 0) {
        printf("Número inválido de alunos.\n");
        return 1; 
    }

    int contador = 0;
    float peso_total = 0.0, peso_aluno;

    printf("Digite o peso de cada aluno, um por vez:\n");

   
    while (contador < numero_alunos) {
        printf("Peso do aluno %d: ", contador + 1);
        scanf("%f", &peso_aluno);
        peso_total += peso_aluno;
        contador++;
    }

    
    float media_peso = peso_total / numero_alunos;

    printf("A média de peso dos alunos é: %.2f\n", media_peso);
    return 0;
}
