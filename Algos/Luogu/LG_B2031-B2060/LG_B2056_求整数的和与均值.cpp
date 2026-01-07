#include <cstdio>

int main() {
    int n;
    std::scanf("%d", &n);
    long long a;
    long long avg = 0;
    for (int i = 0; i < n; i++) {
        std::scanf("%lld", &a);
        avg += a;
    }
    std::printf("%lld ", avg);
    std::printf("%.5lf", (double) avg / n);

    return 0;
}