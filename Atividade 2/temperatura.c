/*
A conversão de graus Fahrenheit para Celsius é obtida por
Tc={(Tf-32)x(5/9)}, em que Tc é a temperatura em Celsius e Tf em
Fahrenheit. Faça um programa C que calcule e que imprima uma
tabela de graus Fahrenheit e graus Celsius, cujos graus variem de
50 a 65, de 1 em 1.
*/
#include <stdio.h>

int main()
{
    float tf, tc;
    
    printf("Fahrenheit\tCelcius\n");
    
    for (tf = 50; tf <= 65; tf ++){
        tc = (tf-32)*(5.0/9.0);
        printf("%.2f\t\t%.2f\n", tf, tc);
    }
    
}
