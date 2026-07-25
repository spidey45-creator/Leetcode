class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        unordered_map<string,vector<string>> mp;

        int n=strs.size();
    vector<vector<string>> ans;
    for(auto it: strs)
    {string x =it;
    sort(x.begin(),x.end());
    mp[x].push_back(it);}
    for(auto it:mp){ans.push_back(it.second);}
    
  return ans;      
    }
};