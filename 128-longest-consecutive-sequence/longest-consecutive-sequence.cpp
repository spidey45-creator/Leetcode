class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;

        unordered_set <int> s;
        for(int i=0; i<n ; i++)
        {
            s.insert(nums[i]);
        }
        if(s.size()==1) {return 1;}

        int ans=1;

        for(auto it: s)
        {
            if(s.find(it-1)==s.end())
            {
                int cnt=1;
                int x=it;

                while(s.find(x+1)!=s.end())
                {   
                    x=x+1;
                    
                    cnt++;
                    ans=max(cnt,ans);
                }
            }
        }

        return ans;
    }
};