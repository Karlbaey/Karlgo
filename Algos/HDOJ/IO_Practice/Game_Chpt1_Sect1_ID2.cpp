// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=1&problemid=3002
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}