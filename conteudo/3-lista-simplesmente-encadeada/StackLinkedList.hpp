#ifndef _STACK_LINKED_LIST_
#define _STACK_LINKED_LIST_

struct Node {
    int value;
    Node * next;
};

class StackLinkedList {
private:
    Node * head;
    int length;
public:
    StackLinkedList();   // Cria uma pilha vazia

    StackLinkedList(const StackLinkedList & stack);   // Cria uma copia de outra pilha

    void push(int key);                               // empilha um elemento no topo da pilha
    void pop();                                       // desenpilha o elemento do topo
    void peek() const;                                // retorna o valor do elemento do topo

    bool isEmpty() const;                             // verifica se pilha vazia

    void reverse();                                   // inverte os elementos da lista
    StackLinkedList reverse() const;                  // cria uma nova pilha com os mesmos elementos, mas retorna uma pilha nova com os valores invertidos

    void print();                                     // Imprime os elementos da pilha

   ~StackLinkedList();                                // destrutor
};

#endif