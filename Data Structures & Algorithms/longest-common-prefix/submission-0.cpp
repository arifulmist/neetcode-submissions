class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string pref=str[0];
        for(int i=0;i<str.size();i++)
        {
         int j=0;
         while(j<min(pref.size(),str[i].size()))
         {
             if(pref[j]!=str[i][j])
             {
                break;
             }
             j++;
         }
         pref=pref.substr(0,j);
        }
        return pref;
    }
};