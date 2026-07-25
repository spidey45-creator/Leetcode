class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        string ans = strs[0];
        int n=strs.size();
       int len=ans.length();
        for(int i=1; i<n; i++)
        {string s=strs[i];
        while(len>s.length()|| ans!=s.substr(0,len))
        {len--;
        if(len==0){return "";}
        ans=ans.substr(0,len);}}

     
    return ans;}
};