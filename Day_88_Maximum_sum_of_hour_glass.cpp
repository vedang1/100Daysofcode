class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        // code here
        int ans = -1;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(i+2<n and j+2<m){
                    int sum = mat[i][j]+mat[i][j+1]+mat[i][j+2]+mat[i+1][j+1]+mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2];
                    ans = max(ans,sum);
                }
            }
        }
        
        return ans;
    }
};
