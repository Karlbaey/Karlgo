#include <cstdio>

int main() {
    int a, b, c;
    std::scanf("%d%d%d", &a, &b, &c);
    if (
        (a < 60 && b > 59 && c > 59) ||
        (b < 60 && a > 59 && c > 59) ||
        (c < 60 && b > 59 && a > 59)) {
        std::printf("1");
    } else {
        std::printf("0");
    }

    return 0;
}