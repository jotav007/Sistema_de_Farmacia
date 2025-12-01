#ifndef SAIDA_H
#define SAIDA_H

#include "tipos.h"

// Exibe o menu principal.
void exibirMenu();

// Exibe todos os medicamentos cadastrados.
void exibirEstoque(Medicamento meds[], int numMeds);

// Exibe alertas para medicamentos com estoque baixo.
void alertarEstoqueBaixo(Medicamento meds[], int numMeds);

#endif
