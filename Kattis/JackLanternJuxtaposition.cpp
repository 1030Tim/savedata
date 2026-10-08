// https://open.kattis.com/problems/jackolanternjuxtaposition
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    short a,b,c;
    std::cin >> a >> b >> c;
    std::cout << c*b*a << std::endl;
    return 0;
}