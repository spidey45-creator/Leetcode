class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n=nums.size();
    //    next_permutation(nums.begin(),nums.end());
    int x=-1;
    
    // int idx=x+1;
    for(int i=n-2; i>=0; i--)
    {if(nums[i]<nums[i+1]){x=i; break;}}
    int y=x+1;

    if(x==-1){reverse(nums.begin(),nums.end()); return;}
    for(int i=x+1; i<n; i++)
    {if(nums[i]>nums[x] && nums[i]<nums[y]){y=i;}}
    swap(nums[x],nums[y]);
    sort(nums.begin()+(x+1), nums.end());



    }
};