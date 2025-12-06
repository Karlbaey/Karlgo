// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=2&problemid=7
// Title: Financial Management
#include <stdio.h>

int main()
{
    float b = 0;
    for (int i = 0; i < 12; i++)
    {
        float a;
        scanf("%f", &a);
        b += a;
    }
    printf("$%.2f", b / 12);

    return 0;
}