#include <cstdio>

int main() {
    char a;
    std::scanf("%c", &a);
    if ((int) a % 2 == 0) {
        std::printf("NO");
    } else {
        std::printf("YES");
    }

    return 0;
}