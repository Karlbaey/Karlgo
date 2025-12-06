// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=1&problemid=3003s
// Title: A+B for Input-Output Practice (III)
#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        if (a == 0 && b == 0)
        {
            break;
        }
        printf("%d\n", (long long)a + b);
    }

    return 0;
}
