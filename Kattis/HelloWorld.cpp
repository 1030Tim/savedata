//https://open.kattis.com/problems/hello

#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false); // 關閉標準留的同步

    std::cin.tie(NULL); // 解除cin cout 綁定

    std::cout << "Hello World!" << std::endl;

    return 0;
}