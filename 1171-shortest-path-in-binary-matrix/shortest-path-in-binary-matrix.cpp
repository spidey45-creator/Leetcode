class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
       queue<pair<int,int>> q;
       int n=grid[0].size();
      vector<vector<int>> dist(n,vector<int>(n,1e9));
      if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;


      q.push({0,0});
      dist[0][0]=0;


      while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();


        for(int i=-1; i<=1; i++){
            for(int j=-1;j<=1;j++){
                if(i==0&&j==0) continue;

                if(x+i<n&&x+i>=0&&y+j<n&&y+j>=0&&grid[x+i][y+j]==0&&1+dist[x][y]<dist[x+i][y+j]){
                    dist[x+i][y+j]=1+dist[x][y];
                    q.push({x+i,y+j});
                    }
            }
        }


      } if(dist[n-1][n-1]==1e9){return -1;}
      return dist[n-1][n-1] +1;

    }
};