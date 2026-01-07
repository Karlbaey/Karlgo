#include <cstdio>

int main() {
    int a;
    std::scanf("%d", &a);
    if (a % 2 == 0) {
        std::printf("even");
    } else {
        std::printf("odd");
    }

    return 0;
}