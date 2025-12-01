#include <stdio.h>
#include <string.h>
#include "entrada.h"
#include "tipos.h"

// Função para registrar um novo medicamento
void registrarMedicamento(Medicamento meds[], int *numMeds) {
    Medicamento novo;

    printf("\n=== Cadastro de Medicamento ===\n");

    printf("Nome do medicamento: ");
    fgets(novo.nome, sizeof(novo.nome), stdin);
    novo.nome[strcspn(novo.nome, "\n")] = '\0'; // Remover \n

    printf("Preco (R$): ");
    scanf("%f", &novo.preco);
    getchar();

    printf("Quantidade em estoque: ");
    scanf("%d", &novo.estoque);
    getchar(); // limpar buffer

    novo.vendido = 0; // inicia com zero vendido

    meds[*numMeds] = novo;
    (*numMeds)++;

    printf("\nMedicamento cadastrado com sucesso!\n");
}


// Função para registrar uma venda
void registrarVenda(Medicamento meds[], int numMeds) {
    char nome[50];
    int quantidade;

    printf("\n=== Registrar Venda ===\n");

    printf("Nome do medicamento: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    int indice = -1;
    for (int i = 0; i < numMeds; i++) {
        if (strcmp(meds[i].nome, nome) == 0) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        printf("Medicamento não encontrado!\n");
        return;
    }

    printf("Quantidade: ");
    scanf("%d", &quantidade);
    getchar();

    if (quantidade <= 0 || quantidade > meds[indice].estoque) {
        printf("Quantidade inválida!\n");
        return;
    }

    meds[indice].estoque -= quantidade;
    meds[indice].vendido += quantidade;

    printf("\nVenda registrada com sucesso!\n");
}


// Lê opção do menu
int lerOpcao() {
    int opcao;

    printf("Escolha: ");

    scanf("%d", &opcao);
    getchar(); // limpar buffer para fgets funcionar depois

    return opcao;
}
