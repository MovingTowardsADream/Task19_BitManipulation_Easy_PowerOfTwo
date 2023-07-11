#include <iostream>

class Solution {
public:
    static bool isPowerOfTwo(int n) {
        // 1
        if (!n) return 0;
        while (n != 1) {
            if (n & 1) {
                return 0;
            }
            n = n >> 1;
        }
        return 1;
        // 2
        //if (n < 1) {
        //    return 0;
        //}
        //return ((n & n - 1) == 0);
    }
};

int main()
{
    std::cout << Solution::isPowerOfTwo(0);
}
