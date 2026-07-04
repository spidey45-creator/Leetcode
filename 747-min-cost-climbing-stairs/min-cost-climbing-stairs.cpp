    class Solution {
    public: 
    // spidey
            int tcost(int x,vector<int> &cost){
                if(x==0){return cost[0];}
            
                int prev2=cost[0];
                int prev=cost[1];
            
                for(int i=2; i<=x; i++)
            {int curr=cost[i]+min(prev,prev2);
            prev2=prev;
            prev=curr;}
            return  min(prev,prev2);
            

            }

        int minCostClimbingStairs(vector<int>& cost) {
            int n= cost.size();
            if(cost.size()==1){return cost[0];}
        
            int x=n-1;

            return tcost(x,cost);
        
            
        }
    };