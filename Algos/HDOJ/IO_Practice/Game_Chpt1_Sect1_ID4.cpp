// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=1&problemid=3004
// Title: A+B for Input-Output Practice (IV)
#include <stdio.h>

int main()
{
    int N;
    while (scanf("%d", &N) != EOF)
    {
        if (N == 0)
        {
            break;
        }
        int a = 0;
        for (int i = 0; i < N; i++)
        {
            int b;
            scanf("%d", &b);
            a += b;
        }
        printf("%d\n", a);
    }

    return 0;
}