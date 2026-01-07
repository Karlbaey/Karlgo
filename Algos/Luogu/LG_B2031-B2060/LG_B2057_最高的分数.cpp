#include <climits>
#include <cstdio>

int main() {
    int n;
    std::scanf("%d", &n);
    int a;
    int max_score = INT_MIN;
    while (n--) {
        std::scanf("%d", &a);
        if (max_score < a) {
            max_score = a;
        }
    }
    std::printf("%d", max_score);

    return 0;
}