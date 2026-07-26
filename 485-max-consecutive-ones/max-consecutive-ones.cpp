class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        bool flag=1;
        for(int i=0; i<n;i++)
        {if(nums[i]==1){flag=0; break;}}
        if (flag==1){return 0;}
        int ans=1;
        int maxi=1;
        for(int i=1;i<n;i++)
        {   
            if(nums[i]==nums[i-1] &&nums[i]==1){
                maxi++;
                ans=max(ans,maxi);
            }
            else{maxi=1;}
        }
        return ans;
        
    }
};