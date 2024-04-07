/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int idade, tempo_servico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador ainda não pode se aposentar.\n");
    }

    return 0;
}
