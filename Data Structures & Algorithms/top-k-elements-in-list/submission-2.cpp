class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        vector<int>v;
        vector<pair<int,int>>aa;
        int cc=0;
        map<int,int>mp;
      
        for(int i=0;i<n.size();i++)
        {  
            mp[n[i]]++;
        }
        for(auto i:mp)
        {
          aa.push_back({i.second,i.first});
        }
        sort(aa.begin(),aa.end(),greater<pair<int,int>>());
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(aa[i].second);
        }
        
        return ans;
    }
};
