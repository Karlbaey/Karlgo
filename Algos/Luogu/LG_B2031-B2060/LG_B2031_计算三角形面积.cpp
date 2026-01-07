#include <cmath>
#include <cstdio>

double distance(double x1, double y1, double x2, double y2) {
    double res = std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
    return res;
}

double triangle_area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double res = std::sqrt(p * (p - a) * (p - b) * (p - c));

    return res;
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    std::scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);

    double a = distance(x1, y1, x2, y2);
    double b = distance(x1, y1, x3, y3);
    double c = distance(x3, y3, x2, y2);
    double area = triangle_area(a, b, c);
    std::printf("%.2lf", area);

    return 0;
}