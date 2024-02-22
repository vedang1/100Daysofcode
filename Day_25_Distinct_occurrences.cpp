class Solution
{
public:
    int mod = 1e9 + 7;

    int solve(int i, int j, string s, string t, vector<vector<int>> &dp)
    {
        //base case
        if (i == s.size())
            return j == t.size();
     
        if (dp[i][j] != -1)
            return dp[i][j];
            
        int notTake = solve(i + 1, j, s, t, dp);
        int take = 0;
        if (s[i] == t[j])
        {
            take = solve(i + 1, j + 1, s, t, dp);
        }
        return dp[i][j] = (take + notTake) % mod;
    }

    int subsequenceCount(string s, string t)
    {
        // Your code here
        int m = s.size();
        int n = t.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return solve(0, 0, s, t, dp);
    }
};
