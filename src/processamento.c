#include <string.h>
#include "tipos.h"
#include "processamento.h"

// Busca um medicamento pelo nome
int buscarMedicamento(Medicamento meds[], int numMeds, char nome[]) {
    for (int i = 0; i < numMeds; i++) {
        if (strcmp(meds[i].nome, nome) == 0) {
            return i;
        }
    }
    return -1;
}

// Valida se o nome não está vazio
int validarNome(char nome[]) {
    return strlen(nome) > 0;
}

// Valida estoque (deve ser >= 0)
int validarEstoque(int estoque) {
    return estoque >= 0;
}
