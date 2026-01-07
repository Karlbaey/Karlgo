#include <cstdio>

int main() {
    int a;
    std::scanf("%d", &a);
    if (a > 0) {
        std::printf("positive");
    } else if (a == 0) {
        std::printf("zero");
    } else {
        std::printf("negative");
    }

    return 0;
}