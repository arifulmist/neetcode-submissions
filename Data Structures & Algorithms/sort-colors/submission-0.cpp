class Solution {
public:
    void sortColors(vector<int>& nums)
     {
        int n=nums.size();
        vector<int>r,w,b,ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) r.push_back(nums[i]);
            else if(nums[i]==1) w.push_back(nums[i]);
            else
            {
                b.push_back(nums[i]);
            }
        }
    
        for(auto i:r) ans.push_back(i);
         for(auto i:w) ans.push_back(i);
          for(auto i:b) ans.push_back(i);
          nums=ans;
    }
};