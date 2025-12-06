// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=1&problemid=3008
// Title: A+B for Input-Output Practice (VIII)
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int M;
        long long a = 0;
        scanf("%d", &M);
        for (int j = 0; j < M; j++)
        {
            int b;
            scanf("%d", &b);
            a += (long long)b;
        }
        printf("%lld\n\n", a);
    }

    return 0;
}