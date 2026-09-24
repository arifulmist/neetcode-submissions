class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int ans=0;
        for(auto i:nums)
        {
            mp[i]++;
            ans=max(ans,mp[i]);
        }
         for(auto i:mp)
        {

           if(ans==i.second)
           {
 return i.first;
           }
        }
       
    }
};