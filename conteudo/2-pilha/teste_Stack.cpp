#include "Stack.cpp"

#include <iostream>
using namespace std;

int main(void) {
    Stack stack01 = Stack(5);

    if (stack01.isEmpty()) {
        cout << "Lista vazia" << endl;
        stack01.print();
    }
    
    stack01.push(10);
    stack01.print();

    stack01.push(20);
    stack01.print();

    stack01.push(2);
    stack01.print();

    stack01.push(5);
    stack01.print();

    stack01.push(33);
    stack01.print();

    cout << "\n Elementos: " << stack01.getSize();
    cout << "\n Tamanhos: " << stack01.getLength();

    stack01.push(33);
    stack01.print();

    cout << "\n Elementos: " << stack01.getSize();
    cout << "\n Tamanhos: " << stack01.getLength();

    cout << "\n\n Elemento do Topo: " << stack01.peek();
    stack01.print();

    cout << "\n\n Elemento Desempilhado: " << stack01.pop();
    stack01.print();

    cout << "\n\n Novo Elemento do Topo: " << stack01.peek();

    Stack stack02 = Stack(stack01);
    stack01.print();
    stack02.print();

    stack02.push(22);

    cout << endl;
    stack01.print();
    stack02.print();
    


    return 0;
}