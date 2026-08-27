#ifndef _ORDERED_LIST_HPP_
#define _ORDERED_LIST_HPP_

#include <iostream>

using namespace std;

#define DEFAULT_LENGTH 5

class OrderedList {
    private:
        int size;         // tamanho do vetor
        int length;       // comprimento da lista (tamanho de n_elementos)
        int * array;      // vetor dinamico

        void reallocate();

    public:
        
        OrderedList(int size = DEFAULT_LENGTH); // construtor
        ~OrderedList(); // destrutor da classe
        
        // CRUD - "Create" - Read - Update - Delet
        void insert(int value);    // insere um elemento na lista ordenada
        int search(int value);    // busca im elemento na lista ordenada
        int update(int index);    // atualiza elemento de um determinado índice
        int remove(int value);    // remove um elemento da lista ordenada
        
        void print();             // exibição da pilha

        int getSize();            // retorna o tamanho do vetor
        void setSize(int newSize); // modifica o tamanho do vetor
        int getLength();          // retorna o comprimento da lista

    };


#endif