class Solution{
	public:
		void solve(int ind ,string &s ,vector<string> &ans ,string k){
	        if(ind == s.size()){
	            if(k != "") ans.push_back(k);
	            return;
	        }
	        k += s[ind];
	        solve(ind+1 ,s ,ans ,k);
	        k.pop_back();
	        solve(ind+1 ,s ,ans ,k);
	        
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    solve(0 ,s, ans ,"");
		    sort(ans.begin() ,ans.end());
		    return ans;
		}
};
