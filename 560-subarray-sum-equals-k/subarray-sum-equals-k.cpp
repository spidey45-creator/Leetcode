class Solution {
public:
    int subarraySum(vector<int>& nums, int k) { int n=nums.size();
    int ans=0;
    for(int i=0 ; i<n-1 ; i++){
    
        int sum=nums[i];
    for(int j=i+1 ; j<n ; j++){
        sum=sum+(nums[j]);
        if(sum==k){ans++;}
        }
    }
      for(int i=0 ; i<n ; i++){
        if(nums[i]==k){ans++;}
      }  
      return ans++;
    }
};