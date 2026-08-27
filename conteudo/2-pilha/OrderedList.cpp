#include "OrderedList.hpp"

OrderedList::OrderedList(int size) {
    if (size <= 0) {
        cerr << "# ERRO: invalid length!";
        size = DEFAULT_LENGTH;
    }

    this->array = new int [size];
    this->size = size;
    this->length = 0;
}

OrderedList::~OrderedList() {}

void OrderedList::reallocate(int size) {
    int novo_tamanho = this->size * 2;
    int * auxArray = new int [this->size * 2];
    
    for (int i = 0; i < this->size; i++) {
            auxArray[i] = this->array[i];
        }

    delete this->array;
    this->array = auxArray;
    this->size = novo_tamanho;

}

void OrderedList::insert(int value) {               // Ordem descrecente
    if (this->length == this->size) {
        reallocate();
    }

    int i = this->length - 1;
    while (value < this->array[i] && i >= 0) {
        this->array[i + 1] = this->array[i];
        i--;
    }
    
    this->array[i + 1] = value;
    this->length++;
}

int OrderedList::search(int value) {
    for (int i = 0; i < this->length; i++) {
        if (this->array[i] == value) {
            return i;
        } else if (this->array[i] > value) {       // Facilitando a busca numa lista ordernada
            return -1;
        }
    }
    
    return -1;
}

int OrderedList::update(int index) {


    return 1;
}

int OrderedList::remove(int value) {
    if (isEmpty()) {                              // Ta vazio? Volta ou Continua
        return -1;
    }

    int i = this->length - 1;
    while (value == this->array[i] && i >= 0) {
        this->array[i - 1] = this->array[i];
        i--;
    }
    
    this->array[i + 1] = value;
    this->length--;
    return 1;
}


void OrderedList::print() {
    cout << "\n List: ";
    for (int i = 0; i < this->length; i++) {
        cout << this->array[i] << " ";
    }
}

bool OrderedList::isEmpty() {
    return this->length == 0;
}

int OrderedList::getSize() {
    return this->size;
}

void OrderedList::setSize(int newSize) {
    size = newSize;
}

int OrderedList::getLength() {
    return this->length;
}

// int OrderedList::search(int value) {
//     int index;
//     while (this->array[index] < value) {
    //         index++;
    //     }
    
    //     if (this->array[--index] == value) {
        //         return 1;
        //     } else if (this->array[i] > value) {
//         return -1;
//     }
    
    
//     for (int i = 0; i < this->length; i++) {
//         if (this->array[i] == value) {
//             return i;
//         }
//     }
    
//     return -1;
// }
