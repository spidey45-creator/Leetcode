class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int ans = 0;
        int lo = max(1, n - k);
        int hi = n + k;
        
        for (int x = lo; x <= hi; x++) {
            if (abs(n - x) <= k && (n & x) == 0) {
                ans += x;
            }
        }
        
        return ans;
    }
};
