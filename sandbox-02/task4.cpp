#include <iostream>

// Чи виставлений біт n у числі value. Дужки обов'язкові: == зв'язує тісніше за &.
bool bit_is_set(int value, int n) {
    return ((value >> n) & 1) == 1;
}

int main() {
    for (int n = 0; n < 3; ++n) {
        std::cout << bit_is_set(6, n) << (n < 2 ? ' ' : '\n');
    }
}
