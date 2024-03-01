/*
Escreva um programa que solicite dois números inteiros ao usuário e
que apresente na tela como resultado o dobro dos números que devem
ser somados e o resultado da soma devem ser triplicados. Esse
programa deve possuir uma função para dobrar o valor de um número,
outra para somar dois números e uma terceira para triplicar um número.
*/
#include <stdio.h>

int calcularSoma(int num1, int num2){
    return num1 + num2;
}


int calcularDobro(int num){
    return num *2;
}


int calcularTripo(int num){
    return num *3;
}

int main()
{
    int num1, num2;
    int soma, dobro, triplo;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    dobro = calcularDobro(num1) + calcularDobro(num2);
    triplo = calcularTripo(dobro);
    
    printf("O dobro dos numeros somados é: %d\n", dobro);
    printf("O resultado da soma triplicado é: %d\n", triplo);

    return 0;
}
















