#include <stdio.h>
#include "saida.h"
#include "tipos.h"

// Exibe o menu principal
void exibirMenu() {
    printf("\n============================\n");
    printf("     SISTEMA DE FARMÁCIA    \n");
    printf("============================\n");
    printf("1 - Registrar Medicamento\n");
    printf("2 - Registrar Venda\n");
    printf("3 - Exibir Estoque\n");
    printf("4 - Alertas de Estoque Baixo\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

// Exibe todos os medicamentos cadastrados
void exibirEstoque(Medicamento meds[], int numMeds) {
    if (numMeds == 0) {
        printf("\nNenhum medicamento registrado!\n");
        return;
    }

    printf("\n=========== ESTOQUE ===========\n");

    for (int i = 0; i < numMeds; i++) {
        printf("Nome: %s\n", meds[i].nome);
        printf("Preço: R$ %.2f\n", meds[i].preco);
        printf("Estoque: %d\n", meds[i].estoque);
        printf("Vendidos: %d\n", meds[i].vendido);
        printf("--------------------------------\n");
    }
}

// Alerta medicamentos com estoque baixo
void alertarEstoqueBaixo(Medicamento meds[], int numMeds) {
    int encontrou = 0;

    printf("\n*** ALERTAS DE ESTOQUE BAIXO ***\n");

    for (int i = 0; i < numMeds; i++) {
        if (meds[i].estoque < 5) {
            printf("ALERTA: %s está com estoque baixo (%d unidades)\n",
                   meds[i].nome, meds[i].estoque);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum medicamento com estoque baixo.\n");
    }
}
