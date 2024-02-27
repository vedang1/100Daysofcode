class Solution{
  public:
   int missingNumber(vector<int>& arr, int n) {
        
        
        int val=0;
        for(int i=1;i<=n;i++)val =val^i;
        for(int i=0;i<arr.size();i++) val =val^arr[i];
        return val;
    }
};
