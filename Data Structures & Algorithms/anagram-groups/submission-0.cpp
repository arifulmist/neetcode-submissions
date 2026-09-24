class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        map<string,vector<string>>mp;
        for(int i=0;i<s.size();i++)
        {
            string ss=s[i];
            sort(ss.begin(),ss.end());
            mp[ss].push_back(s[i]);
        }
        vector<vector<string>>vv;
      for(auto i:mp)
      {
        vv.push_back(i.second);
      }
      return vv;
    }
};
