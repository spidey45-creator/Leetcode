class Solution {
public:
    vector<int> countBits(int n) { vector<int> count;
        count.push_back(0);
        if(n==0){return count;}
      for(int i=1; i<=n ;i++)
      { int temp=i;
        int cnt=0;
        while(temp){
           temp&=(temp-1);
            cnt++;
        }count.push_back(cnt);}
        return count;
        
    }
};