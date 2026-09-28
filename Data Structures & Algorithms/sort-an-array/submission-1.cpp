class Solution {
public:
    vector<int> sortArray(vector<int>& num) {
        mergesort(num,0,num.size()-1);
        return num;
    }
    private:
    void mergesort(vector<int>&arr,int l,int r)
    {
        if(l>=r) return;
        int mid=l+r>>1;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    void merge(vector<int>&arr,int l,int m,int r)
    {
        vector<int>tmp;
        int i=l,j=m+1;
        while(i<=m and j<=r)
        {
            if(arr[i]<=arr[j])
            {
                tmp.push_back(arr[i]);
                i++;
            }
            else
            {
                 tmp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=m) { tmp.push_back(arr[i]);
        i++;
        }
        while(j<=r) { tmp.push_back(arr[j]);
        j++;
        }
        for(int i=l;i<=r;i++)
        {
            arr[i]=tmp[i-l];
        }
                
    }

};