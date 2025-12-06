// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=2&problemid=23
// Title: ASCII
#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::cin >> std::ws;

    std::string s = "";

    while (n--)
    {
        int ch;
        std::cin >> ch;
        s += (char)ch;
    }
    std::cout << s;

    return 0;
}