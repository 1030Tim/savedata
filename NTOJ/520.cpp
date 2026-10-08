// https://toj.tfcis.org/oj/pro/520/
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false); // 取消同步串流
    std::cin.tie(NULL); // 去消cin cout綁定
    unsigned char *a = (unsigned char*)malloc(sizeof(unsigned char)*4);
    unsigned char *b = (unsigned char*)malloc(sizeof(unsigned char)*4);
    // 測資0到1000用動態配置記憶體
    std::cin >> a >> b;
    std::cout << b << " " << a << std::endl;
}