class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        set<int> s;
        for(auto it :nums){
            mp[it]++;
        }
        for(int i=0; i<n; i++){
            if(mp[nums[i]]>n/3){s.insert(nums[i]);}
        }
        vector<int> ans(s.begin(),s.end());
     return ans;   
    }
};