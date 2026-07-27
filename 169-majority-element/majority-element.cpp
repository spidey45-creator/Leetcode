class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> hash;
        int ans=0;
        int ans1=0;
        for(int i=0; i<n;i++)
        {hash[nums[i]]++;}
        for(int i=0; i<n; i++)
        {int maxi=hash[nums[i]];
        int temp=nums[i];
        if(maxi>ans){ans=maxi;
        ans1=temp;}}
        return ans1;
        
    }
};