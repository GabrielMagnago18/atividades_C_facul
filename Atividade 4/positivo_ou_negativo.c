/*
Desenvolva um programa que tem uma função que recebe um valor
inteiro e verifique se o valor é positivo ou negativo. A função deve retornar
um valor booleano. Depois a função principal deve informar ao usuário o
resultado.
*/
#include <stdio.h>

int verifica( int valor){
    return (valor >= 0);
}

int main()
{
    int num, resultado;
    
    printf("Digite um número para saber se é positio ou negativo: ");
    scanf("%d", &num);
    
    resultado = verifica(num);
    
    if (resultado){
        printf("O número %d é positivo\n", num);
    }
    else{
        printf("O número %d é negativo\n", num);
    }

    return 0;
}
















