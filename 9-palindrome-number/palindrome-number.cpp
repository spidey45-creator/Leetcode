class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        else{
            int xcopy=x;
            long long reverse=0;
            while(xcopy>0)
            {reverse=(reverse*10)+(xcopy%10);
            xcopy/=10;}
            return reverse==x;
            

        }
        
    }
};