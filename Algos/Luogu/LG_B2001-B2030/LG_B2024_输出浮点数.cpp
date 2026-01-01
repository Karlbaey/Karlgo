#include <cstdio>

int main() {
    double r1;
    std::scanf("%lf", &r1);
    std::printf("%f\n", r1);
    std::printf("%.5f\n", r1);
    std::printf("%e\n", r1);
    std::printf("%g", r1);

    return 0;
}