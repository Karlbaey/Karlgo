#include <cstdio>

int main() {
    int a, b;
    std::scanf("%d%d", &a, &b);
    if (a >= 10 || b >= 20) {
        std::printf("1");
    } else {
        std::printf("0");
    }

    return 0;
}