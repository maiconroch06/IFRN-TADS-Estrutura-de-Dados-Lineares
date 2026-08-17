#include "Vetor.hpp"

int main(void) {
    Vetor vetor = Vetor(5);

    vetor.inserir(4);
    vetor.inserir(8);
    vetor.inserir(12);

    vetor.imprimir();
}