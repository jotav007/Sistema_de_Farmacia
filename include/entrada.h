#ifndef ENTRADA_H
#define ENTRADA_H

#include "tipos.h"
#include "processamento.h"  // Para buscarMedicamento e validações

// Registra um novo medicamento
void registrarMedicamento(Medicamento meds[], int *numMeds);

// Registra uma venda
void registrarVenda(Medicamento meds[], int numMeds);

// Lê a opção do menu
int lerOpcao();

#endif
