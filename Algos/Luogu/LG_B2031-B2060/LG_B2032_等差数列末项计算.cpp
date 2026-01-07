#include <cstdio>

int main() {
    int a1, a2, n;
    std::scanf("%d%d%d", &a1, &a2, &n);

    int d = a2 - a1;
    std::printf("%d", (a1 + (n - 1) * d));

    return 0;
}