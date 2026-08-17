// Arquivo de implementação classe Vetor
#include "Vetor.hpp"
#include "iostream"

Vetor::Vetor(int tamnho = 10) {
    if (tamanho <= 0) {
        tamnho = 10;
    } 
    
    // vetor alocado dinamicamente
    this->vetor = new int [tamanho];
    this->n_elementos = 0;
    this->tamanho = tamanho;
}

int Vetor::getNElementos() {
    return this->n_elementos;
}

int Vetor::getTamanho() {
    return this->tamanho;
}

bool Vetor::inserir(int valor) {
    if (this->n_elementos < this->tamanho) {
        this->vetor[this->n_elementos++] = valor;
        return true;
    }

    return false;
}

int Vetor::buscar(int valor) {
    for (int i = 0; i < this->n_elementos; i++) {
        if (this->vetor[i] == valor) {
            return i;
        }
        
        return -1;
    }
    
}

void Vetor::imprimir(){

    for (int i = 0; i < n_elementos; i++) {
        cout << *vetor << endl;
    }
    
}