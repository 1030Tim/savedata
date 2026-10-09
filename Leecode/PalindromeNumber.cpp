// https://leetcode.com/problems/palindrome-number/description/
#include <iostream>
class Solution {
public:
    bool isPalindrome(int x) {
        int sum = 0;
        int temp = x;

        if (x < 0) return false;

        while(temp >= 1)
        {
            sum += (temp%10);
            sum *= 10;
            temp /= 10;  
        }
        if (x == sum/10) return true;
        else return false;        
    }
};