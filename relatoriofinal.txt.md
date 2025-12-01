RELATÓRIO FINAL

Desafios que encontramos

- No começo, separar o código em vários arquivos foi bem complicado. Eu sempre fiz tudo dentro do main.c, então dividir em módulos (entrada, processamento, saída) exigiu um bom planejamento para não virar bagunça.
- Usar include guards (#ifndef/#endif) também foi chato no início. Às vezes o código não compilava porque algum header estava duplicado ou mal importado.
- No Git, apanhei um pouco. Não criei o .gitignore logo de cara e acabei subindo arquivos que não precisava, tipo executáveis e objetos.

Como resolvemos

- Pra modularizar, revisamos o código da Parte 2 e fomos separando tudo aos poucos. A cada função movida, compilávamos para ver se não quebrava nada. Assim ficou mais fácil corrigir os includes.
- Sobre os include guards, pesquisei alguns exemplos e fui padronizando. Quando aparecia erro de redefinição, ajustava o guard certinho e recompilava.
- No Git/GitHub, usamos os comandos básicos (init, add, commit). 

O que aprendemos

- Em C, modularizar deixa tudo mais limpo. Separar código em headers e arquivos .c torna o projeto mais organizado e evita aquela bagunça de ter tudo em um só arquivo.
- Structs ajudam MUITO. Fica bem mais fácil agrupar informações e o código se torna mais legível.
- Git é essencial: fazer commits pequenos e frequentes ajuda a saber exatamente onde algo deu errado. E o GitHub facilita salvar e compartilhar o projeto.
- Validação de entrada e comentários no código deixam o sistema mais seguro e fácil de entender depois.

O que dá pra melhorar no futuro

- Salvar dados em arquivo: seria ótimo poder fechar o programa e, ao abrir de novo, todos os medicamentos ainda estarem lá.
- Busca mais completa: pesquisar medicamentos por nome incompleto, categoria, estoque baixo, etc.
- Interface mais amigável: talvez usar ncurses para deixar o menu mais bonito, não só o terminal puro.
- Validações extras: impedir nomes repetidos, cadastrar data de validade do medicamento…
- Várias farmácias: criar um sistema capaz de gerenciar diferentes unidades, com seus próprios estoques.