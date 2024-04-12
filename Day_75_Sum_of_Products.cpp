class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        // code here
        vector<int>b(31,0);
        
        long long ans = 0 ; 
        
        for(int i=0;i<n;i++)
        {
            int M = 0 ; 
            int num = arr[i];
            for(int j=0;j<31;j++)
            {
                int t = 1 & (num>>j);
                if(t)
                {
                   ans+=(1ll*b[j]*pow(2,M));
                   b[j]++;
                }
                M++;
            }
        }
        return ans;
    }
};
