#include <cstdio>

int main() {
    int a;
    char c;
    std::scanf("%d %c", &a, &c);

    int k = 0;
    if (c == 'y') {
        k += 5;
    }

    if (a <= 1000) {
        k += 8;
    } else {
        k += 8;
        a -= 1000;
        int i = a / 500;
        if (a % 500 != 0) {
            i++;
        }
        k += i * 4;
    }

    std::printf("%d", k);

    return 0;
}