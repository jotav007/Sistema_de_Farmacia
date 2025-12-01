 # Sistema_de_Farmacia
Projeto integrador III

Este projeto é um sistema desenvolvido em C para o gerenciamento simples e eficiente de estoque de medicamentos em pequenas farmácias.  
Executado via terminal, o sistema permite registrar vendas, atualizar o estoque automaticamente e emitir alertas quando os níveis mínimos forem atingidos, evitando a falta de produtos essenciais.

Visão Geral

O objetivo do sistema é facilitar o controle diário do estoque, substituindo processos manuais e minimizando erros operacionais.  
O programa valida todas as entradas, impede vendas acima do estoque disponível e oferece uma interação rápida e direta.

Funcionalidades

- Cadastro do nome do medicamento  
- Registro da quantidade atual em estoque  
- Registro da quantidade vendida  
- Atualização automática do estoque restante  
- Alerta quando o estoque atingir o nível mínimo  
- Validação de entradas para evitar inconsistências  

Requisitos Funcionais

O sistema deve:
- Armazenar:
- Nome do medicamento  
- Quantidade em estoque  
- Quantidade vendida  
- Atualizar o estoque após cada venda  
- Emitir alerta quando o estoque estiver abaixo do mínimo  

Requisitos Não Funcionais

- Interface via terminal  
- Respostas rápidas  
- Validação das entradas para evitar erros  
- Baixo consumo de recursos  

Público-Alvo

- Proprietários de pequenas farmácias  
- Atendentes responsáveis pelo controle de estoque  
- Estudantes que desejam aprender lógica aplicada em C  

Como Executar

Compilação
Utilize o GCC ou qualquer compilador compatível com C:
gcc sistema_de_farmacia.c -o sistema_de_farmacia
Execução
Copiar código
./sistema_de_farmacia

Tecnologias Utilizadas

Linguagem C
Execução via terminal 

Melhorias Futuras

Suporte a múltiplos medicamentos
Persistência de dados em arquivo
Relatórios de vendas
Menu interativo com múltiplas opções
Modularização do código em arquivos .h e .c
