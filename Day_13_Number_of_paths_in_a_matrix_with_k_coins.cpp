class Solution {
public:
    bool isValid(int i,int j,int n){
        
        return i<n and j<n;
        
    }
    long long solve(int i,int j,int n,int k,vector<vector<int>>&arr,vector<vector<vector<long long>>>&dp){
        
        if(!isValid(i,j,n) || k<0)return 0;
        
        if(k==arr[i][j] and i==n-1 and j==n-1)return 1;
        
        if(dp[i][j][k]!=-1)return dp[i][j][k];
        
        long long x = solve(i+1,j,n,k-arr[i][j],arr,dp);
        long long y = solve(i,j+1,n,k-arr[i][j],arr,dp);
        
        return dp[i][j][k] = x+y;
    }
    long long numberOfPath(int n, int k, vector<vector<int>> arr){
        
        vector<vector<vector<long long>>>dp(n+1,vector<vector<long long>>(n+1,vector<long long>(k+1,-1)));
        
       return solve(0,0,n,k,arr,dp);
    }
};
