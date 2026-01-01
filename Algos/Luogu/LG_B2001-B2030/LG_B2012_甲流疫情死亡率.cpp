#include <cstdio>

int main() {
    int a, b;
    std::scanf("%d", &a);
    std::scanf("%d", &b);
    double percent = (double) b / a * 100.0;
    std::printf("%.3lf%%", percent);

    return 0;
}