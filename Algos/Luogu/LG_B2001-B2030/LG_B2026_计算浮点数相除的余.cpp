#include <cmath>
#include <cstdio>

int main() {
    double r1, r2;
    std::scanf("%lf%lf", &r1, &r2);
    double res = std::fmod(r1, r2);
    std::printf("%.4lf", res);

    return 0;
}