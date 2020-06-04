// LeetCode
// Problem - 7

class Solution {
public:
    int reverse(int x) {
    long long int reverse = 0;
        
        while(x != 0) {
            reverse = reverse*10;
            reverse += x%10;
            x /= 10;
        }
        return (int)reverse == reverse ? (int)reverse : 0;
    }
};
