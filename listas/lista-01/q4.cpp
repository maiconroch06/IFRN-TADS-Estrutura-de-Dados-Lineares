/*

QUESTÃO 4:

Fila Sequencial Circular com Vetor Dinâmico em C++ 

Um programador tentou implementar uma Fila Circular Sequencial utilizando vetor dinâmico. O método enqueue 
(inserção) funciona, mas ele não consegue fazer o redimensionamento do vetor dinâmico quando a fila enche. 
Abaixo está o código parcial da classe Queue: 
 

Sua tarefa: 

1. Explique por que a cópia direta newElements[i] = elements[i] falha em uma fila circular quando o ponteiro 
front não está na posição 0 (por exemplo, após algumas remoções e inserções). 

- A variavel i do laõ de repetição começa pelo indice 0, porém numa fila circular
os indicies referente ao inicio pode ser alterado, como também o indice do fim. Sendo
necessario utilizar o valor da variavel front para para se iniciar do inicio verdadeiro
antes de fazer a copia, além exitar alterar os valores de front e rear.

2. Reescreva a implementação do método resize() de forma correta, garantindo que a ordem lógica dos 
elementos da fila seja preservada na nova área de memória alocada dinamicamente.

    void resize() {
        int newCapacity = capacity * 2;
        int* newElements = new int[newCapacity];

        for (int i = front; i < count; i++) {
            newElements[i] = elements[i]
        }
        
        delete[] elements;
        elements = newElements;
        capacity = newCapacity;

    }

*/