#include <iostream>

// Найменший степінь двійки, не менший за x.
int next_pow2(int x) {
    int p = 1;
    while (p < x) {
        p <<= 1;         // зсув ліворуч = множення на 2
    }
    return p;
}

int main() {
    std::cout << next_pow2(5) << ' ' << next_pow2(64) << ' ' << next_pow2(100) << '\n';
}
