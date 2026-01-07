#include <cstdio>

int main() {
    int m, n;
    std::scanf("%d %d", &m, &n);

    if (m % 2 == 0) {
        m++;
    }

    int total = 0;
    for (int i = m; i <= n; i += 2) {
        total += i;
    }

    std::printf("%d", total);
    return 0;
}