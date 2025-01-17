class Solution {
public:
    int trap(vector<int>& arr) {
       
        int n=arr.size();
        int mx=INT_MIN;
        int lmax[n],rmax[n];
        int res=0;
        
        for(int i=0;i<n;i++)
        {
          mx=max(mx,arr[i]);
          lmax[i]=mx;
        }
        
        mx=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
          mx=max(mx,arr[i]);
          rmax[i]=mx;
        }
        
        for(int i=0;i<n;i++)
        res+=min(lmax[i],rmax[i])-arr[i];
        
        return res;
    }
};
