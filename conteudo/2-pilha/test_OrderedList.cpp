#include <iostream>
#include "OrderedList.hpp"

using namespace std;

int main(void) {
    OrderedList array = OrderedList(5);
    
    array.insert(3);
    array.insert(5);
    array.insert(2);
    // array.insert(7);
    // array.insert(1);
    array.print();

    return 0;
}