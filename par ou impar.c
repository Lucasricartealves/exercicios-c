/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1;
   // recebendo o numero inteiro positivo do usuario 
    printf("digite um numero inteiro positivo:");
    scanf("%i",&num1);
    
    // verificando se o numero é par ou impar
    if (num1 % 2 == 0) { 
        printf(" o numero %i é par.\n",
        num1);
    } else {
        printf("o numero %i é impar.\n",
        num1);
    }

    return 0;
}

