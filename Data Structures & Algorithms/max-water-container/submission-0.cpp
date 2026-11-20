class Solution {
public:
    int maxArea(vector<int>& h) {
        int left=0;
        int right=h.size()-1;
        int mx=0;
        while(left<right)
        {
            int ch=min(h[left],h[right]);
            int wd=right-left;
            mx=max(mx,wd*ch);
            if(h[left]<h[right])
            {
                left++;
            }
            else
            {
                right--;
            }

        }
        return mx;
        
    }
};
