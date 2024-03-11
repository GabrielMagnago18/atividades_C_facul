
/*
Desenvolva um algoritmo que leia uma matriz numérica 4x4 e calcule:
    a. A soma dos elementos da diagonal secundária;
    b. A soma das linhas pares da matriz;
    c. A soma das linhas ı́mpares da matri-;
    d. A média das linhas pares;
    e. A média das linhas diagonais (primária e secundária).
*/


#include <stdio.h>

int main()
{
    int i, j, N = 4;
    int matriz[N][N];
    
    printf("Armazenando elementos na matriz\n");
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("Digite os elementos da matriz: ");
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    
    
    printf("Soma dos elementos da diagonal secundária\n");
    for(i = 0; i < N; i++){
        int soma = 0;
        
        for(i = 0; i < N; i++){
            int num_atual = matriz[i][(N - 1) - i];
            soma += num_atual;
        }
        printf("%d ", soma);
    }
    
    
    printf("\n\nSoma das linhas pares da matriz\n");
    for(i = 0; i <= 2; i += 2) {
        int soma = 0;

        for(j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i, soma);
    }
    
    
    printf("\n\nSoma das linhas ímpares da matriz\n");
    for(i = 1; i < 4; i += 2) {
        int soma = 0;

        for(j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i, soma);
    }
    
    
    printf("\n\nMédia das linhas pares\n");
    for(i = 0; i <= 2; i += 2) {
        int soma = 0;

        for(j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
        
        float media = (float)soma / 4;
        printf("Média da linha %d: %.2f\n", i, media);
    }
    
    
    //media das linhas diagonais
    int soma_primaria = 0;
    for(i = 0; i < 4; i++) {
        soma_primaria += matriz[i][i];
    }
    float media_primaria = (float)soma_primaria / 4.0;

    printf("\nMédia da diagonal primária: %.2f\n", media_primaria);

    
    int soma_secundaria = 0;
    for(i = 0; i < 4; i++) {
        soma_secundaria += matriz[i][3 - i];
    }
    float media_secundaria = (float)soma_secundaria / 4.0;

    printf("Média da diagonal secundária: %.2f\n", media_secundaria);
    
    return 0;
}


























