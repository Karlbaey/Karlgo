#include <cstdio>
#define PI 3.14159

int main() {
    double r;
    std::scanf("%lf", &r);
    double d = 2 * r;
    double c = 2 * PI * r;
    double a = PI * r * r;
    std::printf("%.4lf %.4lf %.4lf", d, c, a);

    return 0;
}