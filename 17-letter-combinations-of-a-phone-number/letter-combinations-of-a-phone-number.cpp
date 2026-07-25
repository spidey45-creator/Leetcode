class Solution {
public:
    void solve(int i, string curr, unordered_map<char,string> &mp, vector<string> &ans, string &digits) {
        if (curr.length() == digits.length()) {
            ans.push_back(curr);
            return;
        }
        string letters = mp[digits[i]];
        for (char val : letters) {
            curr.push_back(val);
            solve(i+1, curr, mp, ans, digits);
            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        unordered_map<char,string> mp;
        mp['2']="abc"; mp['3']="def"; mp['4']="ghi"; mp['5']="jkl"; mp['6']="mno";
        mp['7']="pqrs"; mp['8']="tuv"; mp['9']="wxyz";
        string curr;
        vector<string> ans;
        solve(0, curr, mp, ans, digits);
        return ans;
    }
};