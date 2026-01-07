#include <algorithm>
#include <cstdio>

int main() {
    int a, b, c;
    std::scanf("%d%d%d", &a, &b, &c);

    // sorting
    if (a > b) {
        std::swap(a, b);
    }
    if (b > c) {
        std::swap(b, c);
    }
    if (a > b) {
        std::swap(a, b);
    }

    std::printf("%d", c);

    return 0;
}