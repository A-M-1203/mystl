#include <iostream>
#include "array.hpp"

int main() {
    mystl::Array<int, 5> array;
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    for(uint64_t i = 0; i < array.capacity(); i++){
        std::cout << array[i] << std::endl;
    }
}
