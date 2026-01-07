#include <algorithm>
#include <cstdio>

int main() {
    double a, b, c;
    std::scanf("%lf%lf%lf", &a, &b, &c);

    // sorting
    if (a > b) {
        std::swap(a, b);
    }
    if (b > c) {
        std::swap(b, c);
    }
    if (a > b) {
        std::swap(a, b);
    }

    if (a + b <= c) {
        std::printf("0");
    } else {
        std::printf("1");
    }

    return 0;
}