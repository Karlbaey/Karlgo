#include <cstdio>

int main() {
    int c[5];
    for (int i = 0; i < 5; i++) {
        std::scanf("%d", &c[i]);
    }

    int eaten = 0;
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            int div = c[i] / 3;
            eaten += c[i] % 3;
            c[4] += div;
            c[1] += div;
            c[0] = div;
            continue;
        }
        if (i == 4) {
            int div = c[i] / 3;
            eaten += c[i] % 3;
            c[0] += div;
            c[3] += div;
            c[4] = div;
            continue;
        }
        int div = c[i] / 3;
        eaten += c[i] % 3;
        c[i - 1] += div;
        c[i + 1] += div;
        c[i] = div;
    }

    for (int i = 0; i < 5; i++) {
        std::printf("%d", c[i]);
        if (i != 4)
            std::printf(" ");
    }
    std::printf("\n%d", eaten);

    return 0;
}