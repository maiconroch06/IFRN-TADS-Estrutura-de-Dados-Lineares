#include "StackLinkedList.hpp"

#include <iostream>
using namespace std;

int main(void) {

    cout << " ====== LISTA 01 ======" << endl;
    StackLinkedList stack01 = StackLinkedList();
    stack01.print();            // Imprime pilha vazia
    stack01.push(5);
    stack01.print();            // Imprime o primeiro elemento da pilha
    stack01.push(10);
    stack01.print();            // Imprime mais elementos da pilha
    cout << " -> Peek: " << stack01.peek() << endl;
    cout << " ======================" << endl;
    
    cout << "\n ====== LISTA 02 ======" << endl;
    StackLinkedList stack02 = StackLinkedList(stack01);
    stack02.print();            // Imprime elementos da pilha 01
    cout << " -> Topo Atual: " << stack02.peek() << endl;
    cout << " -> Topo Removido: " << stack02.pop() << endl;
    cout << " -> Topo Atual: " << stack02.peek() << endl;
    stack02.print();
    cout << " ======================" << endl;
    
    return 0;
}