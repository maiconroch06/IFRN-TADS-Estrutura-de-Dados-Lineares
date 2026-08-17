// Arquivo de cabeçalho da classe Vetor
#ifndef VETOR_HPP
#define VETOR_HPP

using namespace std;

#define TAMANHO_PADRAO 10

class Vetor {
    private:
        int n_elementos;
        int tamanho;
        int* vetor;

    public:
        Vetor(int tamnho = TAMANHO_PADRAO);

        int getNElementos();
        int getTamanho();

        bool inserir(int valor);
        int buscar(int valor);
    
        void imprimir();
};

#endif