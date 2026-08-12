class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>>eff(n,vector<int>(m,1e8));
        // vector<vector<int>>ans(n,vector<int>(n,-1e8));
        eff[0][0]=0;
        pq.push({0,{0,0}});
        // ans[0][0]=0;

        while(!pq.empty()){
            int x =pq.top().second.first;
            int y =pq.top().second.second;
            int wt=pq.top().first;
            pq.pop();
            int row[]={0,1,0,-1};
            int col[]={-1,0,1,0};
            
            if(x==n-1 && y==m-1){return wt;}

            // if (wt > eff[x][y]) continue;
            
            for(int i =0; i<4; i++)
            {
                int nrow= x+row[i];
                int ncol= y + col[i];


                    if(nrow<n && nrow>=0 && ncol<m && ncol>=0  ){
                        int ef=abs(heights[nrow][ncol]-heights[x][y]);
                        int neweff=max(ef,wt);

                        if(neweff<eff[nrow][ncol]){
                        eff[nrow][ncol]=neweff;
                        pq.push({neweff,{nrow,ncol}});

                        }
                    }
                    

                
              
                
            }

        }
        return 0;
    }
};