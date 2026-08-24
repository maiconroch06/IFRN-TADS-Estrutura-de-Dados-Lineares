// Arquivo de cabeçalho da classe Vetor
// Arquivo de definição da classe
#ifndef VETOR_HPP
#define VETOR_HPP

#include <iostream>

using namespace std;

#define TAMANHO_PADRAO 10

class Vetor {
    private:
        int n_elementos;  // número de elementos armazenados
        int tamanho;      // tamanho do vetor (número de elementos máximo)
        int * vetor;      // estrutura de dados dinâmica (ponteiro)
    
    public:
        Vetor(int tamanho = TAMANHO_PADRAO);

        int getNElementos();
        int getTamanho();

        void inserir(int valor);     // inserir no vetor
        int buscar(int valor);       // buscar valor no vetor

        void imprimir();             // imprimir elementos do vetor

};

#endif