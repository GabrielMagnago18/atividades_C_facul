/*
Nome do programa: média de 3 numeros
Descrição: Programa em C que recebe 3 números e faz sua média
Autor: Gabriel Magnago
Data:21/02/2024
*/



#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);
    
    float media = (num1 + num2 + num3) / 3;
    
    printf("A média dos numeros %d, %d e %d é igual a %0.2f", num1, num2, num3, media);

    return 0;
}
