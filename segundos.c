/*
Escreva um programa para:

a. Receba do usuário um tempo em segundos,
correspondente à duração de um evento qualquer
(por exemplo, jogo de futebol);

b. Calcule e mostre ao usuário o tempo equivalente
em horas, minutos e segundos.
*/



#include <stdio.h>

int main()
{
    int segundos;
    
    
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);
    
    int minutos = segundos / 60;
    segundos = segundos % 60;  
    
    int horas = minutos / 60;
    minutos = minutos % 60;  
    
    if (minutos > 60) {
        horas += 1;  
    }
    
    printf("Isso equivale a: %d:%d:%d", horas, minutos, segundos);

    return 0;
}
