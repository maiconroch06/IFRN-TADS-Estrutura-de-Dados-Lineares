#include "Stack.hpp"

Stack::Stack(int size) {

}

Stack::Stack(const Stack & st) {
    this->
}

bool Stack::isEmpty() const {
    return this->top == EMPTY_STACK;
}

int Stack::peek() const {
    if (!this->isEmpty()) {
        return this->stack[this->top];
    }

    return EMPTY_STACK;
}

void Stack::push(int value) {
    this->stack[++this->top] = value;

    if (this->size == this->getLength()) {
        this->reallocate();
    }
}

int Stack::pop() {
    if (!this->isEmpty()) {
        int top_element = this->stack[this->top];
        this->top--;

        return top_element;
    }

    return EMPTY_STACK;
}

void Stack::print() {
    cout << "\n STACK:";
    for (int i = this->top; i >= 0; i--) {
        cout << this->stack[i] << " ";
    }
    
}

Stack::~Stack() {
    delete [] this->stack;
    this->stack = nullptr;
}

void Stack::reallocate() {
    int newSize = this->size * 2;
    int* auxStack = new int [newSize];

    for (int i = 0; i < this->top; i++) {
        auxStack[i] = this->stack[i];
    }

    delete [] this->stack;
    this->stack = auxStack;
    this->size = newSize;
}

int Stack::getSize() const {
    return this->top;
}

int Stack::getLength() const {
    return this->top + 1;
}

