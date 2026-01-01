#include <cmath>
#include <cstdio>

int main() {
    int h, r;
    std::scanf("%d %d", &h, &r);
    double v = 3.14 * r * r * h;
    std::printf("%.0lf", ceil(20000 / v));

    return 0;
}