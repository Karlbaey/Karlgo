#include <cstdio>

int main() {
    int n;
    std::scanf("%d", &n);
    double a;
    double avg = 0;
    for (int i = 0; i < n; i++) {
        std::scanf("%lf", &a);
        avg += a;
    }
    std::printf("%.3lf", avg / double(n));

    return 0;
}