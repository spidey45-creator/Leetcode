class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (int x : nums) {
            hash[x]++;
        }
        for (int x : nums) {
            if (hash[x] == 1) {
                return x;
            }
        }
        return -1;
    }
};