// Arquivo de implementação da classe Vetor
#include "Vetor.hpp"

Vetor::Vetor(int tamanho) {
    if(tamanho <= 0) {
        tamanho = 10;
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

void Vetor::inserir(int valor) {
    if(this->n_elementos < this->tamanho) {
        this->vetor[this->n_elementos++] = valor;
    } else {
        // realocação de memória
        int novo_tamanho = this->tamanho * 2;
        int * aux_vetor = new int [this->tamanho * 2];  // novo vetor
        
        for(int i = 0; i < this->tamanho; i++) {
            aux_vetor[i] = this->vetor[i];
        }

        delete this->vetor;
        this->vetor = aux_vetor;
        this->tamanho = novo_tamanho;

        this->vetor[this->n_elementos++] = valor;
    }
}

int Vetor::buscar(int valor) {
    for(int i = 0; i < this->n_elementos; i++) {
        if(this->vetor[i] == valor) {
            return i;
        }
    }

    return -1;
}

void Vetor::imprimir() {    
    cout << " VETOR: ";
    for(int i = 0; i < this->n_elementos; i++) {
        cout << this->vetor[i] << " ";
    }
}