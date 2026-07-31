class Solution {
public:
    int reachNumber(int target) {
        int steps=0;
        int sum=0;
        int i=1;
        target =abs(target);
        
        while(sum<target || (sum-target)%2!=0)
        {steps++;
        sum+=steps;}
        return steps;
        
        
    }
};