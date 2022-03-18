class Solution {
public:
    int climbStairs(int n) {
        if (n < 3) {
            return n;
        }
        int result = 0;
        int n1 = 1, n2 = 2;
        for (int i = 3; i <= n; ++i) {
            result = n1 + n2;
            n1 = n2;
            n2 = result;
        }
        return result;
    }
};