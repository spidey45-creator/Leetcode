    class Solution {
    public: 
    // spidey
           

        int minCostClimbingStairs(vector<int>& cost) {
            
           
        
            int x=cost.size()-1;
             if(x==0){return cost[0];}
            
                int prev2=cost[0];
                int prev=cost[1];
            
                for(int i=2; i<=x; i++)
            {int curr=cost[i]+min(prev,prev2);
            prev2=prev;
            prev=curr;}
            return  min(prev,prev2);

           
        
            
        }
    };