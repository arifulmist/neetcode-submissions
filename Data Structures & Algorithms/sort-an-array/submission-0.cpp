class Solution {
public:
    vector<int> sortArray(vector<int>& num) {
        vector<int>ans;
        multiset<int> ms1;
    
        for(int i=0;i<num.size();i++)
        {
            ms1.insert(num[i]);
        }
      for(auto i:ms1)
      {
        ans.push_back(i);
      }
      return ans;
    }

};