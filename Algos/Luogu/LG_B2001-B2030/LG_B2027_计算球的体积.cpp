#include <cstdio>
#define PI 3.14

int main() {
    double r;
    std::scanf("%lf", &r);
    double v = (4.0 / 3.0) * PI * r * r * r;
    std::printf("%.5lf", v);

    return 0;
}