/*
Nome do programa: conversor de segundos
Descrição: Programa em C que transforma segundos para horas e minutos
Autor: Gabriel Magnago
Data:21/02/2024
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
