// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=2&problemid=24
// Title: Specialized Four-Digit Numbers
#include <iostream>

// the sum of all the digits of x in y scale.
int Scale(int x, int y)
{
    int k = 0;
    while (x != 0)
    {
        k += x % y;
        x /= y;
    }
    return k;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for (int i = 1000; i < 10000; i++)
    {
        if (Scale(i, 10) == Scale(i, 12) && Scale(i, 10) == Scale(i, 16))
        {
            std::cout << i << '\n';
        }
    }

    return 0;
}