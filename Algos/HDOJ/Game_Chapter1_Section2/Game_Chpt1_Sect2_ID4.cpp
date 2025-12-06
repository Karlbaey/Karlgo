// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=2&problemid=12
// Title: Rightmost Digit
#include <stdio.h>

int pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int t = 1;
    while (n > 0)
    {
        if (n & 1 == 1)
        {
            t *= x;
        }
        x *= x;
        n >>= 1;
    }

    return t;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int x = n % 10;
        n %= 4;
        if (n == 0)
        {
            n = 4;
        }

        int res = pow(x, n) % 10;
        printf("%d", res);
    }

    return 0;
}