#ifndef _ORDERED_LIST_HPP_
#define _ORDERED_LIST_HPP_

#include <iostream>

using namespace std;

class OrderedList {
    private:
        int size;         // tamanho do vetor
        int length;       // comprimento da lista (tamanho de n_elementos)
        int * array;      // vetor dinamico

        void reallocate();

        OrderedList(int size = DEFAULT_LENGTH); // construtor
        
        int getSizer();           // retorna o tamanho do vetor
        int getLength();          // retorna o comprimento da lista
        
        int setSize(int newSize); // modifica o tamanho do vetor
        
        int search(int value);    // busca im elemento na lista ordenada
        int insert(int value);    // insere um elemento na lista ordenada
        int remove(int value);    // remove um elemento da lista ordenada

        int update(int index);    // atualiza elemento de um determinado índice

        void print();

        ~OrderedList(); // destrutor da classe
    public:
    };


#endif