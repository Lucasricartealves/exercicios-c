/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2;
    float media;
    
    printf("digite a nota da primeira prova:");
    scanf("%f", &nota1);
    
    printf("digite a nota da segunda prova:");
    scanf("%f", &nota2);
    
    if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
       
        media = (nota1 + nota2) / 2;

        if (media > 6) {
            printf("O aluno foi aprovado com media %.2f\n", media);
        } else if (media >= 4 && media <= 5) {
            printf("O aluno esta de recuperacao com media %.2f\n", media);
        } else {
            printf("O aluno foi reprovado com media %.2f\n", media);
        }
    } else {
        printf("Nota invalida! As notas devem estar entre 0.0 e 10.0\n");
    }
    return 0;
}


