#include <cstdio>

int main() {
    int n;
    std::scanf("%d", &n);
    int a, b, c;
    int gold = 0, silver = 0, bronze = 0;
    while (n--) {
        std::scanf("%d%d%d", &a, &b, &c);
        gold += a;
        silver += b;
        bronze += c;
    }
    std::printf("%d %d %d %d", gold, silver, bronze, gold + silver + bronze);

    return 0;
}