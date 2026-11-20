class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        vector<vector<int>>ans;
        int n=v.size();
        sort(v.begin(),v.end());
        for(int i=0;i<n-2;i++)
        {
           if(v[i]>0) break;
           if(i>0 and v[i]==v[i-1]) continue;
           int left=i+1;
           int right=n-1;
           while(left<right)
           {
            int sum=v[i]+v[left]+v[right];
            if(sum<0) left++;
            else if(sum>0) right--;
            else 
            {
                ans.push_back({v[i],v[left],v[right]});
                while(left<right and v[left]==v[left+1]) left++;
                while(left<right and v[right]==v[right-1]) right--;
                left++;
                right--;
            }
           }
        }
        return ans;
    }
};
