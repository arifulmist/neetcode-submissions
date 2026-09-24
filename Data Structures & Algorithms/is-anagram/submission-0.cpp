class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int>f1,f2;
       if(s.size()!=t.size()) return false;
       for(int i=0;i<s.size();i++)
       {
        f1[s[i]]++;
        f2[t[i]]++;
       }
      
       bool fla=true;
        for(int i=0;i<s.size();i++)
       {
          char c=s[i];
       //   cout<<" :"<<f1[c]<<" ->"<<f2[c]<<" ";
          if(f1[c]!=f2[c])
          {
            fla=false;
            break;
          }
       }
       return fla;
      
    }
};
