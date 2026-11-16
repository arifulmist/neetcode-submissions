class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        if(nums.size()<=0) return 0;
        int cc=0;
        for(auto i:st)
        {
            int x=i-1;
                if (st.find(x) == st.end()) 
                 {
                   int ln=1;
                   
                   while(st.find(i+ln)!=st.end())
                   {
                       ln++;
                   }
                   cc=max(cc,ln);
                }
        }
        return cc;
    }
};
