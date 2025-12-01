#ifndef PROCESSAMENTO_H
#define PROCESSAMENTO_H

#include "tipos.h"

// Busca um medicamento pelo nome; retorna índice ou -1.
int buscarMedicamento(Medicamento meds[], int numMeds, char nome[]);

// Valida nome (não pode ser vazio).
int validarNome(char nome[]);

// Valida estoque (não pode ser negativo).
int validarEstoque(int estoque);

#endif
