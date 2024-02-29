/*
Desenvolva um algoritmo que calcule a nota final de um
estudante. A nota é composta por: um trabalho de laboratório
(peso 2), uma avaliação semestral (peso 3) e um exame final
(peso 5).
*/

#include <stdio.h>

int main()
{
    float trabalhoLab, avalSemestral, exameFinal;
    float pesoTrabalho = 2, pesoAvalSemestral = 3, pesoExameFinal = 5;
    
    printf("Digite a nota do trabalho de laboratório do aluno: ");
    scanf("%f", &trabalhoLab);

    
    printf("Digite a nota da avaliação semestral do aluno: ");
    scanf("%f", &avalSemestral);

    
    printf("Digite a nota do exame final do aluno: ");
    scanf("%f", &exameFinal);
    
    float media = (trabalhoLab * pesoTrabalho + avalSemestral * pesoAvalSemestral + exameFinal * pesoExameFinal) / (pesoTrabalho + pesoAvalSemestral + pesoExameFinal);
    
    if (media < 5) {
        printf("Aluno ficou com média menor que 5.\n");
        printf("Conceito: E");
    }
    else if (media >= 5 && media < 6) {
        printf("Aluno ficou com média entre 5 e 6.\n");
        printf("Conceito: D");
    }
    else if (media >= 6 && media < 7) {
        printf("Aluno ficou com média entre 6 e 7.\n");
        printf("Conceito: C");
    }
    else if (media >= 7 && media < 8) {
        printf("Aluno ficou com média entre 7 e 8.\n");
        printf("Conceito: B");
    }
    else if (media >= 8 && media <= 10) {
        printf("Aluno ficou com média entre 8 e 10.\n");
        printf("Conceito: A");
    }

    return 0;
}
