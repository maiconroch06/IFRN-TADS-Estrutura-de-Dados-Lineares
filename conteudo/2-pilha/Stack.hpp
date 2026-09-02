#ifndef _STACK_HPP_
#define _STACK_HPP_

#include <iostream>

using namespace std;

#define DEFAULT_SIZE 5
#define EMPTY_STACK -1

class Stack {
private:
    int size;
    int length;
    int top;
    int* stack;

public:
    Stack(int size = DEFAULT_SIZE);
    Stack(const Stack & st);
    ~Stack();

    int getSize() const;
    int getLength() const;

    bool isEmpty() const;  // verifica se a ppilha esta vazia // metodo const n modifica o objeto

    int peek() const; // obtem o valor no topo da pilha se mremovelo da pilha

    void push(int value);
    int pop();
    
    void print();
    void reallocate();

};

#endif