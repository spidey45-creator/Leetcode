#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long getgcd(const vector<int>& nums, int x) {
        long long g = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (i == x) continue;
            if (g == -1) {
                g = nums[i];
            } else {
                g = std::gcd(g, (long long)nums[i]);
            }
        }
        return (g == -1) ? 0LL : g;
    }

    long long getlcm(const vector<int>& nums, int x) {
        long long l = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (i == x) continue;
            if (l == -1) {
                l = (long long)nums[i];
            } else {
                // Must explicitly cast both arguments to long long
                l = std::lcm(l, (long long)nums[i]);
            }
        }
        return (l == -1) ? 0LL : l;
    }

    long long maxScore(vector<int>& nums) {
        int n = nums.size();

        // Option 1: Factor score without removing any element
        long long maxans = getgcd(nums, -1) * getlcm(nums, -1);

        // Option 2: Try removing element at each index 'i'
        for (int i = 0; i < n; i++) {
            long long tempgcd = getgcd(nums, i);
            long long templcm = getlcm(nums, i);
            
            long long currentScore = tempgcd * templcm;
            maxans = max(maxans, currentScore);
        }

        return maxans;
    }
};