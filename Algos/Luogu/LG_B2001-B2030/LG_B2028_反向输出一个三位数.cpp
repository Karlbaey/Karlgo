#include <cstdio>

int main() {
    char r1[3];
    std::scanf("%s", &r1);
    for (int i = 2; i >= 0; i--) {
        std::printf("%c", r1[i]);
    }

    return 0;
}