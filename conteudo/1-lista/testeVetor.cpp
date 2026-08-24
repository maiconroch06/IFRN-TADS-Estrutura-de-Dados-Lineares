#include <iostream>
#include "Vetor.hpp"

using namespace std;

int main(void) {
    Vetor vetor = Vetor(5);

    int inserir = 1;
    int valor;

    while(inserir) {
        cout << "\n-> Valor que deseja inserir: ";
        cin >> valor;

        vetor.inserir(valor);

        cout << "-> Inserir outro valor? ";
        cin >> inserir;
    }

    vetor.imprimir();

    cout << "-> TAMANHO DO VETOR: " << vetor.getTamanho();

    return 0;
}