// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=1&problemid=3001
// Title: A+B for Input-Output Practice (I)
#include <stdio.h>

int main()
{
    long long a, b;
    while (scanf("%lld%lld", &a, &b) != EOF)
    {
        printf("%lld\n", a + b);
    }

    return 0;
}