class Solution{
public:
    long long sequence(int num){
        long long mod=1e9+7;
        long long total=0;
      for(int n=num;n>=1;n--){
        long long i=(n*(n+1))/2;
        int count=n;
        long long ans=1;
        while(count>0)
        {
            ans=(ans*i)%mod;
            i--;
            count--;
        }
        total=(total+ans)%mod;
      }
        return total;
    }
};
