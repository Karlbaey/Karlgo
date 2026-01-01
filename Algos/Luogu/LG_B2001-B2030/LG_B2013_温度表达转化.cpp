#include <cmath>
#include <cstdio>

int main() {
    double f;
    std::scanf("%lf", &f);

    double c = (double) 5 * ((f - 32) / 9);
    std::printf("%.5lf", c);

    return 0;
}