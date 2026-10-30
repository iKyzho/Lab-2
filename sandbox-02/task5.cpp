#include <iostream>

// Множення на 10 без множення: 10x = 8x + 2x.
int times10(int x) {
    return (x << 3) + (x << 1);
}

int main() {
    std::cout << times10(7) << ' ' << times10(25) << '\n';
}
