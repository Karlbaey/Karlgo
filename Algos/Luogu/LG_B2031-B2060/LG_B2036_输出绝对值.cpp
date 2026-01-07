#include <cstdio>

int main() {
    double a;
    std::scanf("%lf", &a);
    if (a < 0) {
        a *= -1;
    }
    std::printf("%.2lf", a);

    return 0;
}