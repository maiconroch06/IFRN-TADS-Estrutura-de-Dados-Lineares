#include "OrderedList.hpp"

OrderedList:OrderedList(int size = DEFAULT_LENGTH) {
    if (size <= 0) {
        cerr << "# ERRO: invalid length!";
        size = DEFAULT_LENGTH;
    }

    this->array = new int [size];
    this->size = size;
    this->length = 0;
}

int OrderedList:getSizer() {
    return this->size;
}

int OrderedList:getLength() {
    return this->length;
}

int OrderedList:setSize(int newSize) {
    this->size = size;
}

int OrderedList:search(int value) {
    for (int i = 0; i < this->length; i++) {
        if (this->array[i] == value) {
            return i;
        } else if (this->array[i] > value) {  // Facilitando a busca numa lista ordernada
            return -1;
        }
    }
    
    return -1;

    // int index;
    // while (this->array[index] < value) {
    //     index++;
    // }

    // if (this->array[--index] == value) {
    //     return 1;
    // } else if (this->array[i] > value) {
    //     return -1;
    // }
    
    
    // for (int i = 0; i < this->length; i++) {
    //     if (this->array[i] == value) {
    //         return i;
    //     }
    // }
    
    // return -1;
}

int OrderedList:insert(int value) {

}

int OrderedList:remove(int value) {

}


int OrderedList:update(int index) {

}

void print() {
    cout << "\n List: ";
    for (int i = 0; i < this->length; i++) {
        cout << this->array[i] << " ";
    }
}

OrderedList:~OrderedList() {

}
