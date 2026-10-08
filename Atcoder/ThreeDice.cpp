#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    char a,b,c;
    std::cin >> a >> b >> c;
    std::cout << (7-(a-'0'))+(7-(b-'0'))+(7-(c-'0')) << std::endl;
    return 0;

}