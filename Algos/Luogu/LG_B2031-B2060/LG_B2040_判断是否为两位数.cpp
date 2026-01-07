#include <cstdio>

int main() {
    int a;
    std::scanf("%d", &a);
    if (a > 9 && a < 100) {
        std::printf("1");
    } else {
        std::printf("0");
    }

    return 0;
}