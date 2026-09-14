// Arquivo de cabeçalho da classe StackLinkedList
// Implementa uma pilha de inteiros em uma lista 
// encadeada simples
#ifndef _STACK_LINKED_LIST_
#define _STACK_LINKED_LIST_

#include <iostream>

using namespace std;

struct Node {
    int key;                        // chave do nó
    Node* next;                     // ponteiro para próximo nó
};

class StackLinkedList {
    private:
        Node* top;                  // nó cabeça da lista (head)
        int lenght;                 // número de elementos empilhados

    public:
        StackLinkedList();          // cria uma pilha vazia
        StackLinkedList(const StackLinkedList & stack); // Cria uma copia de outra pilha

        void push(int key);         // empilha um elemento no topo da pilha
        int pop();                  // desempilha o elemento do topo
        int peek() const;           // retorna o valor do elemento do topo

        bool isEmpty() const;       // verifica se pilha vazia
        int getLenght() const;      // número de elementos da pilha

        void reverse();             // inverte a ordem dos elementos da pilha
        StackLinkedList reverse() const;    // cria uma nova pilha com os mesmos elementos, mas retorna uma pilha nova com os valores invertidos

        void print() const;         // imprime os elementos da pilha

        ~StackLinkedList();         // destrutor da classe
};

#endif