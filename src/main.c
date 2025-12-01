#include <stdio.h>
#include "tipos.h"
#include "entrada.h"
#include "processamento.h"
#include "saida.h"

int main() {
    Medicamento meds[MAX_MEDICAMENTOS];
    int numMeds = 0;
    int opcao = 0;

    while (1) {
        exibirMenu();
        opcao = lerOpcao();

        switch (opcao) {
            case 1:
                registrarMedicamento(meds, &numMeds);
                break;

            case 2:
                if (numMeds == 0) {
                    printf("\nNenhum medicamento cadastrado! Cadastre primeiro.\n");
                } else {
                    registrarVenda(meds, numMeds);
                }
                break;

            case 3:
                if (numMeds == 0) {
                    printf("\nNenhum medicamento cadastrado!\n");
                } else {
                    exibirEstoque(meds, numMeds);
                    alertarEstoqueBaixo(meds, numMeds);
                }
                break;

            case 0: // corrigido de case 4 para case 0
                printf("\nSaindo...\n");
                return 0;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
