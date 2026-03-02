#include <cstdint>
#include <stdexcept>

namespace mystl {
template <typename T, uint64_t Size>
class array {
public:
    constexpr T& at(uint64_t index) {
        if (index >= Size)
            throw std::out_of_range("Index out of range");
        return _elements[index];
    }

    constexpr const T& at(uint64_t index) const {
        if (index >= Size)
            throw std::out_of_range("Index out of range");
        return _elements[index];
    }

    constexpr T& front() { return _elements[0]; }
    constexpr const T& front() const { return _elements[0]; }

    constexpr T& back() { return _elements[Size - 1]; }
    constexpr const T& back() const { return _elements[Size - 1]; }

    constexpr T* data() noexcept { return _elements; }
    constexpr const T* data() const noexcept { return _elements; }

    constexpr bool empty() const noexcept { return Size == 0; }

    constexpr uint64_t size() const noexcept { return Size; }
    constexpr T& operator[](uint64_t index) { return _elements[index]; }
    constexpr const T& operator[](uint64_t index) const {
        return _elements[index];
    }

private:
    T _elements[Size];
};
} // namespace mystl
