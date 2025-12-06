// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=2&problemid=10
// Title: An Easy Task
#include <stdio.h>

bool Leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int y, n;
        scanf("%d%d", &y, &n);
        while (!Leap(y))
        {
            y++;
        }
        int flag = 1;
        while (flag != n)
        {
            y += 4;
            if (Leap(y))
            {
                flag++;
            }
        }
        printf("%d\n", y);
    }

    return 0;
}