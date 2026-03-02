#include "array.hpp"
#include <iostream>

int main() {
    mystl::array<int, 5> array1 = {1, 2, 3, 4, 5};
    mystl::array<int, 5> array2{6, 7, 8, 9, 10};

    std::cout << "Array1:\n";
    for (uint64_t i = 0; i < array1.size(); i++) {
        std::cout << array1[i] << std::endl;
    }
    std::cout << "Array2:\n";
    for (uint64_t i = 0; i < array2.size(); i++) {
        std::cout << array2[i] << std::endl;
    }

    array1.swap(array2);

    std::cout << "Array1:\n";
    for (uint64_t i = 0; i < array1.size(); i++) {
        std::cout << array1[i] << std::endl;
    }
    std::cout << "Array2:\n";
    for (uint64_t i = 0; i < array2.size(); i++) {
        std::cout << array2[i] << std::endl;
    }
}
