
#include <stdio.h>

int main()
{
    int num1, num2, resultado;
    char operacao;
    
    printf("operações: +, -, /, *\n");
    printf("Digite a operação que deseja fazer: ");
    scanf("%c", &operacao);
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    switch(operacao){
        case '+':
            resultado = num1 + num2;
            printf("O resultado é: %d", resultado);
            break;
            
        case '-':
            resultado = num1 - num2;
            printf("O resultado é: %d", resultado);
            break;
            
        case '/':
            resultado = num1 / num2;
            printf("O resultado é: %d", resultado);
            break;
            
        case '*':
            resultado = num1 * num2;
            printf("O resultado é: %d", resultado);
            break;
    }
}
