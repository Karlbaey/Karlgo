#include <cstdio>

int main() {
    long long a, b;
    std::scanf("%lld%lld", &a, &b);
    if (a > b) {
        std::printf(">");
    } else if (a == b) {
        std::printf("=");
    } else {
        std::printf("<");
    }

    return 0;
}