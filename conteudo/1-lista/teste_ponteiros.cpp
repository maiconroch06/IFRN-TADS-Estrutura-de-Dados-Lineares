#include <iostream>

using namespace std;

int main(void) {
    int numero = 10;
    int * ptr = nullptr;  // criando ponteiro

    ptr = &numero;        // atribuindo endereço ao ponteiro

    cout << "-> Valor ptr: " << ptr << endl; 
    cout << "-> Endereco de 'numero': " << &numero;
    cout << endl << "-> Conteudo de 'numero' via ptr: " << *ptr;

    cout << "\n\n";

    float notas [4] = {10, 7, 8.5, 2.9};

    cout << "-> Exibir ponteiro 'notas': " << notas << endl;
    cout << "-> Conteudo da primeira posicao via ponteiro: " << *notas << endl;
    cout << "-> Endereco da primeira posicao: " << &notas[0] << endl;
    cout << "-> Exibir ultima nota: " << notas[3] << endl;
    cout << "-> Exibir ultima nota (aritmetica): " << *(notas + 3);

    return 0;
}