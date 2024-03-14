/*
Faça um programa para gerenciamento de compras em um
supermercado, com as seguintes características:
a. O programa deve mostrar um menu de opções ao usuário: adicionar
item, remover item, obter valor total da compra, mostrar relatório (lista
de itens) e sair.
b. O programa deve definir o tipo de registro Item, que pretende
representar um item sendo comprado no supermercado. Observação:
Campos: nome do item, valor unitário e quantidade.
c. O programa deve definir um array (vetor) para permitir criar uma lista
de compras no supermercado. O tamanho do array deve ser igual à N,
sendo o valor de N definido pelo usuário.

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char nome[50];
    float valor_unitario;
    int quantidade;
} Item;

void adicionarItem(Item lista[], int *quantidade_itens) {
    if (*quantidade_itens < 100) { // Limite de 100 itens na lista
        printf("Informe o nome do item: ");
        scanf(" %[^\n]", lista[*quantidade_itens].nome);
        printf("Informe o valor unitario do item: ");
        scanf("%f", &lista[*quantidade_itens].valor_unitario);
        printf("Informe a quantidade do item: ");
        scanf("%d", &lista[*quantidade_itens].quantidade);
        (*quantidade_itens)++;
        printf("Item adicionado com sucesso!\n");
    } else {
        printf("Limite de itens na lista atingido.\n");
    }
}

void removerItem(Item lista[], int *quantidade_itens) {
    int posicao;
    printf("Informe a posicao do item que deseja remover (de 1 a %d): ", *quantidade_itens);
    scanf("%d", &posicao);
    if (posicao >= 1 && posicao <= *quantidade_itens) {
        for (int i = posicao - 1; i < *quantidade_itens - 1; i++) {
            lista[i] = lista[i + 1];
        }
        (*quantidade_itens)--;
        printf("Item removido com sucesso!\n");
    } else {
        printf("Posicao invalida.\n");
    }
}

float calcularValorTotal(Item lista[], int quantidade_itens) {
    float valor_total = 0;
    for (int i = 0; i < quantidade_itens; i++) {
        valor_total += lista[i].valor_unitario * lista[i].quantidade;
    }
    return valor_total;
}

void mostrarRelatorio(Item lista[], int quantidade_itens) {
    printf("\nLista de Compras:\n");
    printf("-------------------------------------------------\n");
    printf("Nome\t\tValor Unitario\tQuantidade\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < quantidade_itens; i++) {
        printf("%s\t\t%.2f\t\t%d\n", lista[i].nome, lista[i].valor_unitario, lista[i].quantidade);
    }
    printf("-------------------------------------------------\n");
}

int main() {
    int opcao, quantidade_itens = 0;
    Item lista_compras[100]; 

    do {
        
        printf("\nMenu:\n");
        printf("1. Adicionar item\n");
        printf("2. Remover item\n");
        printf("3. Obter valor total da compra\n");
        printf("4. Mostrar relatorio\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarItem(lista_compras, &quantidade_itens);
                break;
            case 2:
                removerItem(lista_compras, &quantidade_itens);
                break;
            case 3:
                printf("Valor total da compra: R$ %.2f\n", calcularValorTotal(lista_compras, quantidade_itens));
                break;
            case 4:
                mostrarRelatorio(lista_compras, quantidade_itens);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

