class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
         int n=nums.size();
         vector<int>v(2*n);
         for(int i=0;i<n;i++)
         {
           v[i]=nums[i];
         }
          for(int i=0;i<n;i++)
         {
           v[i+n]=nums[i];
         }
         for(auto i:v)
         {
           cout<<i<<" ";
         } 
         return v;
    }
};