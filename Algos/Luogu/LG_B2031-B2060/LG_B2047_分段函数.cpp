#include <cstdio>

int main() {
    double a;
    std::scanf("%lf", &a);

    if (a >= 0 && a < 5) {
        std::printf("%.3lf", -a + 2.5);
    } else if (a >= 5 && a < 10) {
        std::printf("%.3lf", 2 - 1.5 * (a - 3) * (a - 3));
    } else {
        std::printf("%.3lf", a / 2 - 1.5);
    }

    return 0;
}