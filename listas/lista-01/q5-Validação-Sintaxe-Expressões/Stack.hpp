#ifndef _STACK_
#define _STACK_

#include <iostream>
#include <string>

using namespace std;

class Stack {
    private:
        char* stack;         // Referencia do vetor
        int capacity;        // Capacidade maxima do vetor
        int count;           // Quantidade de valores preenchido no vetor

    public:
        Stack(int CAPACITY = 8);
        ~Stack();

        void push(char c);
        char pop();
        char top() const;

        bool isEmpty() const;

        int getCapacity() const;
        int getCount() const;

        void setCapacity(int count);
        void setCount(int count);
    };


#endif

/*

• P.push(c): Insere o caractere c no topo da pilha 𝑃. 
• P.pop(): Remove e retorna o caractere do topo da pilha 𝑃. 
• P.top(): Retorna o caractere do topo da pilha sem removê-lo. 
• P.isEmpty(): Retorna verdadeiro se a pilha estiver vazia ou falso caso contrário. 

*/