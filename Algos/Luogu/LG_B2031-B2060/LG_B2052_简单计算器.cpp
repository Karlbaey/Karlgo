#include <algorithm>
#include <cstdio>

int main() {
    int a, b;
    char c;
    std::scanf("%d %d %c", &a, &b, &c);

    switch (c) {
    case '+':
        std::printf("%d", a + b);
        break;
    case '-':
        std::printf("%d", a - b);
        break;
    case '*':
        std::printf("%d", a * b);
        break;
    case '/':
        if (b == 0) {
            std::printf("Divided by zero!");
            break;
        }
        std::printf("%d", a / b);
        break;

    default:
        std::printf("Invalid operator!");
        break;
    }

    return 0;
}