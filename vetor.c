/******************************************************************************
Desenvolva um programa em C que leia seis números e
armazene-os em um vetor. Esse programa deve conter ponteiros para
manusear o vetor e imprimir os seus valores. O programa deve
apresentar também o endereço de memória desses números.

*******************************************************************************/
#include <stdio.h>

int main()
{
    const int tamanhoVetor = 6;
    int vetor[tamanhoVetor];
    
    printf("Digite os seis números para serem armazenados\n");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    int *ptrVetor = vetor;
    
    printf("==============================================\n");

    printf("Imprimindo valores do vetor: \n");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Valor %d: %d\nEndereço de memória: %p\n", i + 1, *(ptrVetor + i), &vetor[i]);
        printf("-----------------------------------------\n");
    }
    
    return 0;
}
