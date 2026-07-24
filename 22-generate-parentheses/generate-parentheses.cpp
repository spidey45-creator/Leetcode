class Solution {
public:
void solve(string temp, int open, int close, vector<string> &ans ){
    if(open==0 && close==0){
        ans.push_back(temp);
        return;
    }
    if(open==close){
        string temp1=temp;
        temp1.push_back('(');
        solve(temp1,open-1,close,ans);

    }
    else{
        if(open>0){string temp1=temp;
        temp1.push_back('(');
        solve(temp1,open-1,close,ans);}
        if(close>0){string temp2=temp;
        temp2.push_back(')');
        solve(temp2,open,close-1,ans);}
    }

}


    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        vector<string> ans;
        string temp="";
        solve(temp,open,close,ans);
        return ans;

        
    }
};