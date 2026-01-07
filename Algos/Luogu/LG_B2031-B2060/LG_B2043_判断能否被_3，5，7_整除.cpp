#include <cstdio>

int main() {
    int a;
    std::scanf("%d", &a);
    if (a % 3 == 0) {
        std::printf("YES");
    } else {
        std::printf("NO");
    }

    return 0;
}