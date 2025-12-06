// https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=2&problemid=25
// Title: Identity Card
#include <iostream>
#include <string>

int main()
{
    int n, t;
    char ID[18];
    std::string area[99];
    area[33] = "Zhejiang";
    area[11] = "Beijing";
    area[71] = "Taiwan";
    area[81] = "Hong Kong";
    area[82] = "Macao";
    area[54] = "Tibet";
    area[21] = "Liaoning";
    area[31] = "Shanghai";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> ID;
        t = ((int)ID[0] - 48) * 10 + (int)ID[1] - 48;
        std::cout << "He/She is from " << area[t] << ",and his/her birthday is on ";
        std::cout << ID[10] << ID[11] << "," << ID[12] << ID[13] << "," << ID[6] << ID[7] << ID[8] << ID[9] << " based on the table.";
        std::cout << std::endl;
    }

    return 0;
}