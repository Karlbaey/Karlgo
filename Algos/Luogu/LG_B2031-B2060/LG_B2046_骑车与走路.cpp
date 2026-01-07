#include <cstdio>

int main() {
    int a;
    std::scanf("%d", &a);

    if (a > 100) {
        std::printf("Bike");
    } else if (a == 100) {
        std::printf("All");
    } else {
        std::printf("Walk");
    }

    return 0;
}