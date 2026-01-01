#include <cmath>
#include <cstdio>

double distance(double x1, double y1, double x2, double y2) {
    double res = std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
    return res;
}

int main() {
    double x1, y1, x2, y2;
    std::scanf("%lf %lf", &x1, &y1);
    std::scanf("%lf %lf", &x2, &y2);

    double res = distance(x1, y1, x2, y2);
    std::printf("%.3lf", res);

    return 0;
}