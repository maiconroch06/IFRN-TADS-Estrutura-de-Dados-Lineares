#include "StackLinkedList.hpp"

StackLinkedList::StackLinkedList() {
    this->top = nullptr;
    this->lenght = 0;
}

StackLinkedList::StackLinkedList(const StackLinkedList &stack) { // Dá pra otimizar com lenght
    this->lenght = stack.lenght;

    // Caso a pilha seja vazia
    if (stack.top == nullptr) {
        this->top = nullptr;
        return;
    }

    // Nó de stack do topo
    this->top = new Node;                   // O top do objeto agora aponta para o NovoNó
    (this->top)->key = (stack.top)->key;    // O NovoNó guarda o mesmo valor do primeiro NóStack
    (this->top)->next = nullptr;            // NovoNó apontará para nullptr 
    
    // Nós auxiliares para percorrer
    // as pilhas sem perder a referencia
    Node* auxStack = stack.top;                  // Irá percorrer a pilha Stack
    Node* auxObject = this->top;                 // Irá percorrer a pilha do objeto
    while (auxStack->next != nullptr) {
        // Copia: endereçamento e valor
        auxObject->next = new Node;
        (auxObject->next)->key = auxStack->next->key;
        (auxObject->next)->next = nullptr;

        // Proximo Nó: pula para próximo - Stack e Objeto
        auxStack = auxStack->next;
        auxObject = auxObject->next;
    }
}

void StackLinkedList::push(int key) {
    Node* newNode = new Node;
    newNode->key = key;
    newNode->next = this->top; // Aponta para o antigo topo
    this->top = newNode;       // Novo nó passa a ser o topo
    this->lenght++;
}

int StackLinkedList::pop() {
    if (this->isEmpty()) {
        cerr << "Erro: pilha vazia!" << endl;
        return -1;
    }
    
    Node* aux = this->top;
    int valueRemove = (this->top)->key;
    this->top = (this->top)->next;
    
    delete aux;
    this->lenght--;

    return valueRemove;
} 

int StackLinkedList::peek() const {
    return (this->top)->key;
} 

bool StackLinkedList::isEmpty() const {
    return this->top == nullptr;
} 

int StackLinkedList::getLenght() const {
    return this->lenght;
} 

// void StackLinkedList::reverse() {

// }


// StackLinkedList StackLinkedList::reverse() const {

// }

void StackLinkedList::print() const {
    if (this->isEmpty()) {
        cerr << "    # Pilha Vazia #" << endl;
        return;
    }
    
    cout << " -> Pilha: ";
    Node* aux = this->top;
    while (aux != nullptr) {
        cout << aux->key << " ";
        aux = aux->next;
    }
    cout << endl << " -> Lenght: " << this->getLenght() << endl;
    
} 

StackLinkedList::~StackLinkedList() {

} 