// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=1&problemid=3007
#include <stdio.h>

int main()
{
    long long a, b;
    while (scanf("%lld%lld", &a, &b) != EOF)
    {
        printf("%lld\n\n", a + b);
    }

    return 0;
}