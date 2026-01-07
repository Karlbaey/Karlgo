#include <cstdio>

int main() {
    int a;
    std::scanf("%d", &a);
    if (a == 1 || a == 3 || a == 5) {
        std::printf("NO");
    } else {
        std::printf("YES");
    }

    return 0;
}