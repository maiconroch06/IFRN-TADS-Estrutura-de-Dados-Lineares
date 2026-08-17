#include <iostream>

using namespace std;


int main(void) {
    int numero = 10;
    int* ptr = nullptr;

    ptr = &numero;
    cout << "-> Valor ptr: " << ptr << endl;
    cout << "-> Endereco de 'numero': " << &numero << endl;
    cout << "-> Endereco de 'numero' via ptr: " << *ptr << endl;
    cout << "-> Endereco de 'numero' via ptr: " << &(*ptr) << endl;

    cout << "\n\n";

    float notas [4] = {10, 8, 7.9, 5.6};

    cout << " Exibir ponteiro 'notas': " << notas << endl;
    cout << " Conteudo da primeira posicao via ponteiro: " << *notas << endl;
    cout << " Exibir da primeira posicao: " << &notas[0] << endl;
    cout << " Exibir ultima nota: " << notas[3] << endl;
    cout << " Exibir ultima nota (aritmetica): " << *(notas + 3) << endl;
    
    cout << " Endereco 01: " << *(notas) << endl;
    cout << " Endereco 02: " << *(notas + 1) << endl;
    cout << " Endereco 03: " << *(notas + 2) << endl;
    cout << " Endereco 04: " << *(notas + 3) << endl;



    

    return 0;
}

