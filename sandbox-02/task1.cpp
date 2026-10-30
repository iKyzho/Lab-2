#include <cstdint>
#include <iostream>

// Біт парності: true, якщо в байті непарна кількість одиниць.
bool parity(std::uint8_t b) {
    int ones = 0;
    while (b != 0) {
        ones += b & 1;   // молодший біт
        b >>= 1;         // зсуваємо наступний біт на його місце
    }
    return ones % 2 == 1;
}

int main() {
    std::cout << parity(0xA3) << ' ' << parity(0x07) << ' ' << parity(0xFF) << '\n';
}
