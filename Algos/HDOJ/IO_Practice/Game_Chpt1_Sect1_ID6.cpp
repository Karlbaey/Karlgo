// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=1&problemid=3006
// Title: A+B for Input-Output Practice (VI)
#include <stdio.h>

int main()
{
    int N;
    while (scanf("%d", &N) != EOF)
    {
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