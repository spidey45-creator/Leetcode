class Solution {
public: 
// spidey
        int tcost(int x,vector<int> &cost,vector<int> &dp){
            if(x==0){return cost[0];}
            if(x==1){return cost[1];}
            if(dp[x]!=-1){return dp[x];}

           dp[x]=cost[x]+min(tcost(x-1,cost,dp),tcost(x-2,cost,dp));
            return dp[x];

        }

    int minCostClimbingStairs(vector<int>& cost) {
        int n= cost.size();
        if(cost.size()==1){return cost[0];}
        vector<int> dp(n,-1);
        int x=n-1;

        int ans= min(tcost(x,cost,dp),tcost((x-1),cost,dp));
        return ans;
      
        
    }
};