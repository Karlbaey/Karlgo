#include <cstdio>

int main() {
    double r1, r2;
    std::scanf("%lf%lf", &r1, &r2);
    double R = (r1 * r2) / (r1 + r2);
    std::printf("%.2lf", R);

    return 0;
}