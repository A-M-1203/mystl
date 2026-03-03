#include <stdexcept>

namespace mystl {
template <typename T, size_t Size>
struct array {
    typedef T value_type;
    typedef value_type* pointer;
    typedef const value_type* const_pointer;
    typedef value_type& reference;
    typedef const value_type& const_reference;
    typedef value_type* iterator;
    typedef const value_type* const_iterator;
    typedef size_t size_type;

    constexpr reference at(size_type index) {
        if (index >= Size)
            throw std::out_of_range("Index out of range");
        return _elements[index];
    }
    constexpr const_reference at(size_type index) const {
        if (index >= Size)
            throw std::out_of_range("Index out of range");
        return _elements[index];
    }

    constexpr reference operator[](size_type index) { return _elements[index]; }
    constexpr const_reference operator[](size_type index) const { return _elements[index]; }

    constexpr reference front() { return _elements[0]; }
    constexpr const_reference front() const { return _elements[0]; }

    constexpr reference back() { return _elements[Size - 1]; }
    constexpr const_reference back() const { return _elements[Size - 1]; }

    constexpr pointer data() noexcept { return _elements; }
    constexpr const pointer data() const noexcept { return _elements; }

    constexpr iterator begin() noexcept { return iterator(data()); }
    constexpr const_iterator begin() const noexcept { return const_iterator(data()); }
    constexpr const_iterator cbegin() const noexcept { return const_iterator(data()); }

    constexpr iterator end() noexcept { return iterator(data() + Size); }
    constexpr const_iterator end() const noexcept { return const_iterator(data() + Size); }
    constexpr const_iterator cend() const noexcept { return const_iterator(data() + Size); }

    constexpr bool empty() const noexcept { return Size == 0; }

    constexpr size_type size() const noexcept { return Size; }

    constexpr void fill(const_reference value) {
        for (size_type i = 0; i < Size; i++) {
            _elements[i] = value;
        }
    }

    constexpr void swap(array& other) noexcept {
        value_type temp[Size];
        for (size_type i = 0; i < Size; i++) {
            temp[i] = _elements[i];
            _elements[i] = other[i];
            other[i] = temp[i];
        }
    }

    value_type _elements[Size];
};
} // namespace mystl
