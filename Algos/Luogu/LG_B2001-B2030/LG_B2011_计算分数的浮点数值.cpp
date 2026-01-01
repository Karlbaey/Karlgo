#include <cstdio>

int main() {
    int a, b;
    std::scanf("%d%d", &a, &b);

    double res = (double) a / b;
    std::printf("%.9f", res);

    return 0;
}