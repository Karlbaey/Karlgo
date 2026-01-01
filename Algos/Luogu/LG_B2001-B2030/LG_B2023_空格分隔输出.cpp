#include <cstdio>

int main() {
    char r1;
    int r2;
    float r3;
    double r4;
    std::scanf("%c", &r1);
    std::scanf("%d", &r2);
    std::scanf("%f", &r3);
    std::scanf("%lf", &r4);

    std::printf("%c %d %.6f %.6lf", r1, r2, r3, r4);

    return 0;
}