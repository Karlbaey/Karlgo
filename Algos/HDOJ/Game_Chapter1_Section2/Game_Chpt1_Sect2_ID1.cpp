// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=2&problemid=4
// Title: Climbing Worm
#include <stdio.h>

int main()
{
    int n, u, d;
    while (true)
    {
        scanf("%d%d%d", &n, &u, &d);
        if (n == 0)
        {
            break;
        }
        int worm = 0;
        int minutes = 0;
        while (true)
        {
            minutes++;
            worm += u;
            if (worm >= n)
            {
                break;
            }
            worm -= d;
            minutes++;
        }
        printf("%d\n", minutes);
    }

    return 0;
}