
class Solution
{
public:
    int solve(int i, string &s, set<string>& st,vector<int>& dp){
        if(i == s.length()) return 1;
        if(dp[i] != -1) return dp[i];
        string temp = "";
        for(int j=i;j<s.length();j++){
            temp += s[j];
            if(st.find(temp) != st.end()){
                if(solve(j+1,s,st,dp)) return dp[i] = 1;
            }
        }
        return dp[i] = 0;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
    vector<int> dp(A.length()+1, -1);
        set<string> st;
        for(auto i:B){
            st.insert(i);
        }
        return solve(0,A,st,dp);
    }
};
