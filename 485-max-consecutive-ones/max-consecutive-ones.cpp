class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curmax=0;
        int maxi=0;
        for(auto it: nums)
        {
            if(it==1)
            {curmax++;
            maxi=max(curmax,maxi);}
            else{curmax=0;}
        }
        return maxi;
    }
};