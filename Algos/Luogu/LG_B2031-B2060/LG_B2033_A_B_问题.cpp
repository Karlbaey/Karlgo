#include <cstdio>

int main() {
    int r1, r2;
    std::scanf("%d%d", &r1, &r2);
    long long k = (long long) r1 * r2;
    std::printf("%lld", k);

    return 0;
}