/*
QUESTÃO 3:

Pilha Encadeada em C++, Ponteiros e Prevenção de Memory Leak 
Analise a implementação da classe Stack em C++ apresentada a seguir: 
 
Com base no código acima, responda: 

1. Problema na remoção (pop): Identifique o erro grave relacionado ao gerenciamento dinâmico de 
memória no método pop(). O que acontece com o nó desempilhado da memória Heap? 

- Ausencia do comando 'delete', o codigo apenas desreferencia o Nó, mas não o remove na memória

2. Problema no destrutor (~Stack): O que acontecerá na memória do computador quando um objeto da 
classe Stack for destruído (por exemplo, ao sair de escopo)? 

- O objeto continuará existindo na memória, pois o programa apenas o desreferencia na memoria, mas
não a apaga da memoria.

3. Desempenho e Corretude: Qual seria a consequência do acúmulo dessa falha em uma aplicação do 
mundo real executada por longo período? 

- A longo prazo iria ocupar grande parte disponivel da memória RAM sempre que o objeto for instanciado
podendo ocasionar em travamentos.

*/