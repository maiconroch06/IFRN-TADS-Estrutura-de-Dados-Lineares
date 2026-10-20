#ifndef _STACK_HPP_
#define _STACK_HPP_

#include <iostream>
using namespace std;

#define DEFAULT_SIZE 5
#define EMPTY_STACK -1

class Stack {
    private:
        int size;       // tamanho do vetor
        int top;        // indice do topo da pilha
        int * stack;    // vetor que implementa a pilha

        void reallocate();

    public:
        Stack(int size = DEFAULT_SIZE);     // construtor
        Stack(const Stack & st);            // construtor de cópia
        Stack();            // construtor de cópia

        int getSize() const;        // retorna tamanho do vetor
        int getLength() const;      // retorna número de elementos

        bool isEmpty() const;         // verifica se pilha vazia

        int peek() const;       // obtem valor no topo da pilha
                                // sem removê-lo da pilha

        void push(int value);   // insere elemento no topo da pilha
        int pop();              // retorna o topo da pilha, removendo
                                // o elemento

        void print() const;     // imprimir elementos (para teste)

        ~Stack();       // destrutor da classe
};

#endif