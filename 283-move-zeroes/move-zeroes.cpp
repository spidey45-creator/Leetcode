class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n>1){
            int l=0;
            int r=1;;
            
            while(r<n)
            {if(nums[l]==0&& (nums[r]!=0) )
               
                 {swap(nums[l],nums[r]);
                l++;
                r++;}
                else if(nums[l]==0&&nums[r]==0){r++;}
                else{l++;r++;}
        }
            
            
        }
        
    }
};