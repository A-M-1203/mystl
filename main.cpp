#include "array.hpp"
#include <array>
#include <iostream>

int main() {
    mystl::array<int, 5> array1 = {1, 2, 3, 4, 5};
    mystl::array<int, 5> array2{6, 7, 8, 9, 10};
    std::array<int, 5> arr;

    std::cout << "Array1:\n";
    for (size_t i = 0; i < array1.size(); i++) {
        std::cout << array1[i] << std::endl;
    }
    std::cout << "Array2:\n";
    for (size_t i = 0; i < array2.size(); i++) {
        std::cout << array2[i] << std::endl;
    }

    array1.swap(array2);

    std::cout << "Array1:\n";
    for (auto& value : array1) {
        std::cout << value << std::endl;
    }
    std::cout << "Array2:\n";
    for (auto it = array2.begin(); it != array2.end(); it++) {
        std::cout << *it << std::endl;
    }
}
