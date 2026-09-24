class Solution {
public:
    int removeElement(vector<int>& n, int val) {
        //sort(n.begin(),n.end());
        vector<int>v;
        for(auto i:n)
        {
           
           if(i!=val) v.push_back(i);
        }
        n = v;
        return v.size();
    }
};