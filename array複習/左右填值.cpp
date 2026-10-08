#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int arr[5][5];

    int n = 5, m = 5, sum = 0;
    for (int i = 0; i<5; ++i)
    {
        for (int j = 0; j<5; ++j)
        {
            if ((i)%2 != 0 && i!=0)
                arr[i][m-j-1] = j+(5*i);
            else
                arr[i][j] = j+(4*i)+1;
        }
    }

    for (int i = 0; i<5; ++i)
    {
        for (int j = 0; j<5; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        puts("");
    }
}