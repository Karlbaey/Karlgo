#include <cstdio>

int main() {
    int m, n;
    std::scanf("%d %d", &m, &n);

    int total = 0;
    for (int i = m; i <= n; i++) {
        if (i % 17 == 0) {
            total += i;
        }
    }

    std::printf("%d", total);
    return 0;
}