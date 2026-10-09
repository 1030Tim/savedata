#include <iostream>
#include <string>
using namespace std;
int main()
{
    char symbol[7] = {'I','V','X','L','C','D','M'};
    int value[7] = {1,5,10,50,100,500,1000};
    int sum = 0;
    string s;
    cin >> s;

    for (int i = 0; i < (int)s.size(); ++i)
    {
        for (int j = 0; j<7; ++j)
        {
            if (s[i] == symbol[j])
            {
                sum += value[j];
                cout << sum << " ";
            }
        }
    }
    cout << sum << endl;

}