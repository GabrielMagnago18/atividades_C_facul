/*
Escreva um programa que leia doze números do tipo inteiro digitados
pelo usuário. Separe esses números em pares e ímpares, os armazenem
em dois outros vetores chamados vetpar e vetimpar. Em seguida, o
programa deve apresentar os resultados na tela.
*/


#include <stdio.h>

int main()
{
    int num[12];
    int vetPar[12], vetImpar[12];
    int i, p = 0, im = 0;
    
    
    printf("Digite os doze números inteiros:\n");
    for (i = 0; i < 12; i++ ){
        printf("Número %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (i = 0; i < 12; i++){
        if (num[i] % 2 == 0){
            vetPar[p] = num[i];
            p++;
        }
        else{
            vetImpar[im] = num[i];
            im++;
        }
    }
    
    printf("\nNúmeros pares:\n");
    for (i = 0; i < p; i++){
        printf("%d, ", vetPar[i]);
    }
    
    printf("\nNúmeros ímpares:\n");
    for (i = 0; i < im; i++){
        printf("%d, ", vetImpar[i]);
    }
    
    
    return 0;
}
