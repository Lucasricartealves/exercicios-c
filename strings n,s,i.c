/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char nome[100]; 
    char sexo;
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo); 

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (sexo == 'M' && idade < 18) {
        printf("%s: Nao aceito\n", nome);
    } else {
        printf("%s: Aceito\n", nome);
    }

    return 0;
}
