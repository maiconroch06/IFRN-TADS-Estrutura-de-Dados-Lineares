#include "Stack.hpp"

using namespace std;

Stack::Stack(int capacity) {
    this->stack = nullptr;
    this->capacity = this->capacity;
    this->count = 0;
}

Stack::~Stack() {
    delete[] this->stack;
}

void Stack::push(char c) {
    if (this->isEmpty()) {
        cerr << " Pilha vazia! (pop): ";
        return;
    }
    

}

char Stack::pop() {
    if (this->isEmpty()) {
        cerr << " Pilha vazia! (pop): ";
        return ' ';
    }

    char caracter = this->stack[0];

    return caracter;
}

char Stack::top() const {
    if (this->isEmpty()) {
        cerr << " Pilha vazia! (top): ";
        return ' ';
    }
    return stack[0];
}

bool Stack::isEmpty() const {
    return getCapacity() == getCount();
}

int Stack::getCapacity() const {
    return capacity;
}

int Stack::getCount() const {
    return count;
}

void Stack::setCapacity(int capacity) {
    this->capacity = capacity;
}

void Stack::setCount(int count) {
    this->count = count;
}