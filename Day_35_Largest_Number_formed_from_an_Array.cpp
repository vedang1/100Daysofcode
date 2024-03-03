class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool comp(string a, string b){
	    return a + b > b + a;
	}
	
	string printLargest(int n, vector<string> &arr) {
	    sort(arr.begin(), arr.end(), comp);
	    
	    string ans;
	    for(string i : arr)
	        ans += i;
	    
	    return ans;
	}
};
