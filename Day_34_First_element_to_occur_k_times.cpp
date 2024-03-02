class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
         unordered_map<int,int>mp;
        for(int i = 0 ; i < n ; i++) {
            auto val = a[i];
            mp[val]++;
            
            if(mp[val] >= k) 
               return val;
        }
        return -1;
    }
};
