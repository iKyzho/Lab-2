#include <cstdint>
#include <iostream>

// Складає три байти в одне число 0xRRGGBB.
std::uint32_t pack(int r, int g, int b) {
    return ((std::uint32_t)r << 16) | ((std::uint32_t)g << 8) | (std::uint32_t)b;
}

int main() {
    std::cout << std::hex << pack(255, 136, 0) << ' ' << pack(0, 128, 255) << '\n';
}
