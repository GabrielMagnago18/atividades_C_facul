/*
Escreva um programa para receber 3 valores inteiros
do usuário e mostrar a sua média (que pode não ser
inteira).
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
