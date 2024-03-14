/*
Crie um registro para os funcionários de uma empresa com as
seguintes informações: número do funcionário, nome, idade, telefone,
cargo e salário. O programa deve manter o cadastro de até 100
funcionários. Crie funções que realizem as seguintes tarefas:
a. Inserir funcionário.
b. Listar todos os funcionários cadastrados.
c. Procurar funcionário pelo nome ou pelo número, e imprimir seus
dados.
d. Eliminar o cadastro de um funcionário
e. Editar as informações de um funcionário, dado o seu número de
registro.
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FUNCIONARIOS 3
#define TAM_NOME 50
#define TAM_TELEFONE 15


typedef struct {
    int numero;
    char nome[TAM_NOME];
    int idade;
    char telefone[TAM_TELEFONE];
    char cargo[TAM_NOME];
    float salario;
} Funcionario;


Funcionario funcionarios[MAX_FUNCIONARIOS];
int numFuncionarios = 0;

void inserirFuncionario() {
    if (numFuncionarios < MAX_FUNCIONARIOS) {
        printf("Informe o numero do funcionario: ");
        scanf("%d", &funcionarios[numFuncionarios].numero);
        printf("Informe o nome do funcionario: ");
        scanf(" %[^\n]", funcionarios[numFuncionarios].nome);
        printf("Informe a idade do funcionario: ");
        scanf("%d", &funcionarios[numFuncionarios].idade);
        printf("Informe o telefone do funcionario: ");
        scanf(" %[^\n]", funcionarios[numFuncionarios].telefone);
        printf("Informe o cargo do funcionario: ");
        scanf(" %[^\n]", funcionarios[numFuncionarios].cargo);
        printf("Informe o salario do funcionario: ");
        scanf("%f", &funcionarios[numFuncionarios].salario);
        numFuncionarios++;
        printf("Funcionario cadastrado com sucesso!\n");
    } else {
        printf("Limite de funcionarios atingido.\n");
    }
}

void listarFuncionarios() {
    printf("\nLista de Funcionarios:\n");
    for (int i = 0; i < numFuncionarios; i++) {
        printf("Numero: %d\n", funcionarios[i].numero);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Idade: %d\n", funcionarios[i].idade);
        printf("Telefone: %s\n", funcionarios[i].telefone);
        printf("Cargo: %s\n", funcionarios[i].cargo);
        printf("Salario: %.2f\n\n", funcionarios[i].salario);
    }
}

void procurarFuncionario() {
    int opcao;
    printf("\n1. Procurar por nome\n");
    printf("2. Procurar por número\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        char nomeBusca[TAM_NOME];
        printf("Informe o nome do funcionario: ");
        scanf(" %[^\n]", nomeBusca);
        for (int i = 0; i < numFuncionarios; i++) {
            if (strcmp(funcionarios[i].nome, nomeBusca) == 0) {
                printf("\nFuncionario encontrado:\n");
                printf("Numero: %d\n", funcionarios[i].numero);
                printf("Nome: %s\n", funcionarios[i].nome);
                printf("Idade: %d\n", funcionarios[i].idade);
                printf("Telefone: %s\n", funcionarios[i].telefone);
                printf("Cargo: %s\n", funcionarios[i].cargo);
                printf("Salario: %.2f\n", funcionarios[i].salario);
                return;
            }
        }
        printf("Funcionario com o nome '%s' nao encontrado.\n", nomeBusca);
    } else if (opcao == 2) {
        int numeroBusca;
        printf("Informe o numero do funcionario: ");
        scanf("%d", &numeroBusca);
        for (int i = 0; i < numFuncionarios; i++) {
            if (funcionarios[i].numero == numeroBusca) {
                printf("\nFuncionario encontrado:\n");
                printf("Numero: %d\n", funcionarios[i].numero);
                printf("Nome: %s\n", funcionarios[i].nome);
                printf("Idade: %d\n", funcionarios[i].idade);
                printf("Telefone: %s\n", funcionarios[i].telefone);
                printf("Cargo: %s\n", funcionarios[i].cargo);
                printf("Salario: %.2f\n", funcionarios[i].salario);
                return;
            }
        }
        printf("Funcionario com o numero '%d' nao encontrado.\n", numeroBusca);
    } else {
        printf("Opcao invalida!\n");
    }
}

void eliminarFuncionario() {
    int numero;
    printf("Informe o numero do funcionario que deseja eliminar: ");
    scanf("%d", &numero);
    for (int i = 0; i < numFuncionarios; i++) {
        if (funcionarios[i].numero == numero) {
            for (int j = i; j < numFuncionarios - 1; j++) {
                funcionarios[j] = funcionarios[j + 1];
            }
            numFuncionarios--;
            printf("Funcionario eliminado com sucesso!\n");
            return;
        }
    }
    printf("Funcionario com o numero '%d' nao encontrado.\n", numero);
}

void editarFuncionario() {
    int numero;
    printf("Informe o numero do funcionario que deseja editar: ");
    scanf("%d", &numero);
    for (int i = 0; i < numFuncionarios; i++) {
        if (funcionarios[i].numero == numero) {
            printf("Informe o novo nome do funcionario: ");
            scanf(" %[^\n]", funcionarios[i].nome);
            printf("Informe a nova idade do funcionario: ");
            scanf("%d", &funcionarios[i].idade);
            printf("Informe o novo telefone do funcionario: ");
            scanf(" %[^\n]", funcionarios[i].telefone);
            printf("Informe o novo cargo do funcionario: ");
            scanf(" %[^\n]", funcionarios[i].cargo);
            printf("Informe o novo salario do funcionario: ");
            scanf("%f", &funcionarios[i].salario);
            printf("Funcionario editado com sucesso!\n");
            return;
        }
    }
    printf("Funcionario com o numero '%d' nao encontrado.\n", numero);
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Inserir Funcionario\n");
        printf("2. Listar Funcionarios\n");
        printf("3. Procurar Funcionario\n");
        printf("4. Eliminar Funcionario\n");
        printf("5. Editar Funcionario\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirFuncionario();
                break;
            case 2:
                listarFuncionarios();
                break;
            case 3:
                procurarFuncionario();
                break;
            case 4:
                eliminarFuncionario();
                break;
            case 5:
                editarFuncionario();
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
