#include <cmath>
#include <cstdio>

int main() {
    double a, b, c;
    std::scanf("%lf%lf%lf", &a, &b, &c);

    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        std::printf("No answer!");
        return 0;
    }

    double x1 = (-b + std::sqrt(delta)) / (2 * a);
    double x2 = (-b - std::sqrt(delta)) / (2 * a);

    if (x1 == x2) {
        std::printf("x1=x2=%.5lf", x1);
        return 0;
    }

    if (x1 > x2) {
        std::printf("x1=%.5lf;x2=%.5lf", x2, x1);
    } else {
        std::printf("x1=%.5lf;x2=%.5lf", x1, x2);
    }

    return 0;
}