class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int>f1,f2;
       if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
         sort(t.begin(),t.end());
       return s==t;
      
    }
};
