class Solution {
  public:
    int firstElement(int n) {
        // code here
        int c = 1e9+7;
        vector<int>fib(n+1,0);
        fib[1] = 1;
        for(int i=2;i<n+1;i++){
            fib[i] = (fib[i-1]%c+fib[i-2]%c)%c;
        }
        return fib[n];
    }
};
