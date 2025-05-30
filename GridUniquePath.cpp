class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m + n - 2;  // Total steps
        int r = m - 1;      // Choose r down moves
        double res = 1;
        
        for (int i = 1; i <= r; i++) {
            res = res * (N - r + i) / i;
        }

        return (int)(res + 0.5); // rounding to handle floating-point precision
    }
};
