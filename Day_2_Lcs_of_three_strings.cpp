class Solution{
	public:
	int TotalCount(string str){
	    int solve(int ind, int prevSum, int n, string str, vector<vector<int>> &dp) {
        if(ind == n)
            return 1;
            
        if(dp[ind][prevSum] != -1)
            return dp[ind][prevSum];
            
        int count = 0, sum = 0;
        for(int i = ind; i < n; i++) {
            sum += str[i] - '0';
            if(prevSum <= sum)
                count += solve(i + 1, sum, n, str, dp);
        }
        
        return dp[ind][prevSum] = count;
    } 

	int TotalCount(string str){
	    int n = str.size();
	    vector<vector<int>> dp(n, vector<int> (1000, -1)); // maxsum will 9 * 100 = 900 ~ 1000;
	    return solve(0, 0, n, str, dp);
	}
};
