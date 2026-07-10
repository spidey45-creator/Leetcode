class Solution {
public:



   
    
// spidey


    bool isMatch(string s, string p) {
        int m=s.size();
        int n=p.size();
        vector<vector<bool>> dp(m+1, vector<bool>(n+1,false));

         dp[0][0]=true;
     for(int j=1; j<=n; j++){
            if(p[j-1]=='*' && j>=2){dp[0][j]=dp[0][j-2];}
        }

        for(int i=1; i<=m; i++)
        {for( int j=1; j<=n; j++){
            char cur=p[j-1];
            if (cur=='*'){
                bool flag1 = dp[i][j-2];
                bool flag2 =false;
                if(p[j-2]=='.' || p[j-2]==s[i-1]){
                    flag2=dp[i-1][j];
                }   
                dp[i][j]=flag1|| flag2;

            }
            else if (cur=='.' || cur==s[i-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{dp[i][j]=false;}
        }}
        return dp[m][n];

       
        
    }
};