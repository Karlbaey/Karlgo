#include <cstdio>

int main() {
    int x, a, y, b;
    std::scanf("%d%d%d%d", &x, &a, &y, &b);

    double res = (double) (b * y - a * x) / (b - a);
    std::printf("%.2lf", res);

    return 0;
}