// https://toj.tfcis.org/oj/pro/519/
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false); //關閉同步串流
    std::cin.tie(NULL); // cin cout綁定取笑
    short a,b;
    std::cin >> a >> b;
    std::cout << "Do you want to say "
              << a << " and " << b << " ??\n";
    return 0;
}