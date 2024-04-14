/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int senhaCorreta = 1234; 
    int senhaDigitada, tentativas = 0;
    int maxTentativas = 3;  

    while (tentativas < maxTentativas) {
        printf("Digite a senha (4 digitos): ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaCorreta) {
            printf("Senha Correta\n");
            break;  
        } else {
            printf("Senha Incorreta\n");
            tentativas++;
        }
    }

    if (tentativas == maxTentativas) {
        printf("Limite de tentativas excedido. Acesso negado.\n");
    }

    return 0;
}
