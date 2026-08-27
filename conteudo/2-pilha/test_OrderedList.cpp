#include <iostream>
#include "OrderedList.hpp"

using namespace std;

int main(void) {
    OrderedList array = OrderedList(5);
    
    array.insert(3);
    array.insert(5);
    array.insert(7);
    array.insert(1);
    array.insert(12);
    array.insert(8);
    array.insert(10);
    array.insert(6);
    array.print();
    cout << " -> Length: " << array.getLength();
    cout <<  " -> Size: " << array.getSize();
    array.remove(6);
    array.print();
    cout << " -> Length: " << array.getLength();
    cout <<  " -> Size: " << array.getSize();

    return 0;
}