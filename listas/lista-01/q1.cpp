/*
QUESTÃO 1:

Comparativo entre Estruturas Sequenciais (Estáticas/Dinâmicas) e Encadeadas em C++ 
Em termos de desempenho e gerenciamento de memória, compare a utilização de uma
Lista Sequencial Dinâmica (baseada em vetor) e uma Lista Simplesmente Encadeada
(baseada em nós/ponteiros). 

Em sua resposta, aborde obrigatoriamente os seguintes pontos: 

1. Acesso aos elementos: Diferença no custo computacional (𝑂(1) vs 𝑂(𝑛)) para acessar um elemento em 
uma posição arbitrária 𝑖.

2. Inserção e Remoção: Vantagens e desvantagens de cada estrutura ao inserir ou remover elementos no 
início, no meio e no fim.

3. Overhead de Memória e Fragmentação: Como a alocação dinâmica difere entre redimensionar um vetor 
(new[] / delete[]) e alocar nós individualmente (new No).

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= RESPOSTA =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

1.1 Acesso aos elementos:

- Lista Sequencial Dinâmica: O acesso a um elemento em uma posição arbitrária 𝑖 é feito em tempo constante 𝑂(1),
        pois os elementos são armazenados de forma contínua na memória, permitindo acesso direto através do índice.

- Lista Simplesmente Encadeada: O acesso a um elemento em uma posição arbitrária 𝑖 é feito em tempo linear 𝑂(𝑛),
        pois é necessário percorrer a lista a partir do início até chegar à posição desejada, seguindo os ponteiros de cada nó.
        O acesso ao elemento no início e no fim, pode ser mais eficiente, especialmente quando se trata de operações no início
        ou no fim quando se possui o ponteiro tail que aponta para o último nó.

1.2 Inserção e Remoção:

- Lista Sequencial Dinâmica: A inserção e remoção de elementos no início ou no meio da lista requer o deslocamento dos elementos
        subsequentes, resultando em um custo computacional de 𝑂(𝑛). No entanto, a inserção e remoção no final da lista é eficiente,
        com custo 𝑂(1), desde que haja espaço disponível no vetor. Caso seja necessário redimensionar o vetor, o custo pode aumentar
        devido à necessidade de alocar um novo vetor e copiar os elementos existentes.

- Lista Simplesmente Encadeada: A inserção e remoção de elementos no início da lista é eficiente, com custo 𝑂(1), pois envolve 
        apenas a atualização do ponteiro do nó inicial. No entanto, a inserção e remoção no meio ou no fim da lista requer a travessia 
        da lista até o ponto desejado, resultando em um custo computacional de 𝑂(𝑛). Caso tenha o ponteiro tail, a remoção no fim pode
        ser mais eficiente. A vantagem é que não há necessidade de deslocar elementos, apenas atualizar os ponteiros dos nós.

1.3 Overhead de Memória e Fragmentação:


*/