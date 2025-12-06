// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=2&problemid=21
// Title: IBM Minus One
#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    int i = 0;

    std::cin >> n;
    std::cin >> std::ws;

    while (n--)
    {
        std::string s;
        std::string t = "";
        std::getline(std::cin, s);
        for (char ch : s)
        {
            if (ch >= 'A' && ch < 'Z')
            {
                t += ch + 1;
            }
            else
            {
                t += 'A';
            }
        }
        i++;
        std::cout << "String #" << i << '\n';
        std::cout << t << "\n\n";
    }

    return 0;
}