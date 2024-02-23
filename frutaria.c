#include <stdio.h>

int main()
{
    int qtd_morango, qtd_maca;
    float kg_morango = 7.5, kg_maca = 3.5;
    
    
    printf("Digite quantos quilos de maçã você irá levar: ");
    scanf("%d", &qtd_maca);
    
    printf("Digite quantos quilos de morango você irá levar: ");
    scanf("%d", &qtd_morango);
    
    int frutas = qtd_morango + qtd_maca;
    float valor_total = (qtd_maca * kg_maca) + (qtd_morango * kg_morango);
    
    
    if (frutas <= 5 && valor_total > 19) {
        float desconto = valor_total * 0.08;
        valor_total -= desconto;
        
        printf("O total a pagar será: %.2f", valor_total);
    }
    
    else
        if (frutas > 5) {
            
            kg_morango = 5.3;
            kg_maca = 2.8;
            valor_total = (qtd_morango * kg_morango) + (qtd_maca * kg_maca);
            
            printf("O valor total a pagar será: %.2f", valor_total);
        }
    else {
        printf("O valor total a pagar será: %.2f", valor_total);
    }
    
    return 0;
}
