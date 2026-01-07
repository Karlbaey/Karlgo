#include <cstdio>

int main() {
    int r1;
    std::scanf("%d", &r1);
    if (r1 == 0) {
        std::printf("%d", 1);
        return 0;
    }
    int k = 2;
    while (--r1) {
        k <<= 1;
    }
    std::printf("%d", k);

    return 0;
}