#include <cstdio>

int main() {
    int a, b;
    std::scanf("%d%d", &a, &b);
    std::printf("%d %d", a / b, a % b);

    return 0;
}