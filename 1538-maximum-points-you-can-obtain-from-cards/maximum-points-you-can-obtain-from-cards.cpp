class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int n=cardPoints.size();
        long long presum=0;
        for(int i=0; i<k;i++)
    {presum+=cardPoints[i];}
    long long maxi=presum;
    for(int i=0; i<k;i++)
    {presum-=cardPoints[k-i-1];
    presum+=cardPoints[n-i-1];
    maxi=max(maxi,presum);}
    return maxi;
        
    }
};