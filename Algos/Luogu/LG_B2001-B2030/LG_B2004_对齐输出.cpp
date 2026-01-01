#include <iomanip>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::setw(8) << std::setfill(' ') << a << ' ';
    std::cout << std::setw(8) << std::setfill(' ') << b << ' ';
    std::cout << std::setw(8) << std::setfill(' ') << c << '\n';

    return 0;
}
