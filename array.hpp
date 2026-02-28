#include <cstdint>

namespace mystl {
template <typename Type, uint64_t Capacity>
class Array {
public:
    constexpr uint64_t capacity() { return Capacity; }
    Type &operator[](uint64_t index) { return data[index]; }
    const Type &operator[](uint64_t index) const { return data[index]; }

private:
    uint64_t size = 0;
    Type data[Capacity];
};
} // namespace mystl
