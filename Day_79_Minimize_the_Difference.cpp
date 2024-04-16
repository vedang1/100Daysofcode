class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        vector<int> max1(n), max2(n), min1(n), min2(n);
        
        max1[0] = arr[0];
        min1[0] = arr[0];
        max2[n-1] = arr[n-1];
        min2[n-1] = arr[n-1];
        
        for(int i=1; i<n; i++){
            max1[i] = max(max1[i-1], arr[i]);
            min1[i] = min(min1[i-1], arr[i]);
        }
        for(int i=n-2; i>=0; i--){
            max2[i] = max(max2[i+1], arr[i]);
            min2[i] = min(min2[i+1], arr[i]);
        }
        
        int ans = 1e9;
        for(int i=k; i<=n; i++){
            int maxi = -1;
            int mini = 1e9;
            if(i<n) maxi = max(maxi, max2[i]);
            if(i-k-1>=0) maxi = max(maxi, max1[i-k-1]);
            
            if(i<n) mini = min(mini, min2[i]);
            if(i-k-1>=0) mini = min(mini, min1[i-k-1]);
            
            ans = min(ans, maxi-mini);
        }
        return ans;
    }
};
