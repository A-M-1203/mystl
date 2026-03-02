#include "array.hpp"
#include <array>
#include <iostream>
int main() {
    mystl::array<int, 5> array;
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    for (uint64_t i = 0; i < array.size(); i++) {
        std::cout << array[i] << std::endl;
    }
    std::array<int, 3> arr;
}
