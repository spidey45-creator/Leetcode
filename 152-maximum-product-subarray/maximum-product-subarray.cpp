class Solution {
public:
    int maxProduct(vector<int>& nums) {
         // Store size of array
        int n = nums.size();

        // Initialize prefix and suffix product
        int pre = 1, suff = 1;

        // Initialize answer to negative infinity
        int ans = INT_MIN;

        // Traverse from both left and right
        for (int i = 0; i < n; i++) {
            // Reset prefix if zero
            if (pre == 0) pre = 1;

            // Reset suffix if zero
            if (suff == 0) suff = 1;

            // Multiply prefix with current element from front
            pre *= nums[i];

            // Multiply suffix with current element from back
            suff *= nums[n - i - 1];

            // Update the maximum of all products seen so far
            ans = max(ans, max(pre, suff));
        }

        // Return the final answer
        return ans;
    }
};