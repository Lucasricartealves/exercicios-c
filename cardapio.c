/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int codigo_produto, quantidade;
    float valor_total;

    printf("Cardapio:\n");
    printf("1 - cachorro quente - R$ 1.20\n");
    printf("2 - bauru simples - R$ 1.30\n");
    printf("3 - Bauru com ovo - R$ 1.50\n");
    printf("4 - hamburguer - R$ 1.20\n");
    printf("5 - cheeseburguer - R$ 1.70\n");
    printf("6 - suco - R$ 2.20\n");
    printf("7 - refrigerante - R$ 1.00\n");

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo_produto);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo_produto) {
        case 100:
            valor_total = quantidade * 1.20;
            break;
        case 101:
            valor_total = quantidade * 1.30;
            break;
        case 102:
            valor_total = quantidade * 1.50;
            break;
        case 103:
            valor_total = quantidade * 1.20;
            break;
        case 104:
            valor_total = quantidade * 1.70;
            break;
        case 105:
            valor_total = quantidade * 2.20;
            break;
        case 107:
            valor_total = quantidade * 1.00;
            break;
        default:
            printf("Codigo de produto invalido.\n");
            return 1; 
    }

    printf("Valor total a ser pago: R$ %.2f\n", valor_total);

    return 0;
}
