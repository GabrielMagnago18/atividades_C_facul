/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
