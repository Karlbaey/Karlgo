#include <algorithm>
#include <cstdio>

int main() {
    int a, b;
    std::scanf("%d%d", &a, &b);

    if (a <= 1 && a >= -1 && b <= 1 && b >= -1) {
        std::printf("yes");
    } else {
        std::printf("no");
    }
    return 0;
}