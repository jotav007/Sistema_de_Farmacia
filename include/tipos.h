#ifndef TIPOS_H
#define TIPOS_H

#define MAX_MEDICAMENTOS 100
#define TAM_NOME 50
#define LIMITE_ESTOQUE_BAIXO 10

// Estrutura que representa um medicamento no sistema.
typedef struct {
    char nome[TAM_NOME];  // Nome do medicamento
    float preco;          // adicionado campo preco
    int estoque;          // Quantidade disponível em estoque
    int vendido;          // Total vendido
} Medicamento;

#endif // TIPOS_H
