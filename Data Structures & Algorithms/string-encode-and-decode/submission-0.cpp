class Solution {
public:

    string encode(vector<string>& sx) {
      string ss;
      for(int i=0;i<sx.size();i++)
      {
        ss+=to_string(sx[i].size());
        ss+="#";
        ss+=sx[i];
      }
      return ss;
    }

    vector<string> decode(string s) {
        vector<string>v;
        int cur=0;
        int i=0;
        while(i<s.size())
        {
          int cur=i;
          while(s[cur]!='#')
          {
            cur++;
          }
          int len=stoi(s.substr(i,cur-i));
          i=cur+1;
          cur=i+len;
          v.push_back(s.substr(i,len));
          i=cur;

        }
        return v;
     
    }
};
