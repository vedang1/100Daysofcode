class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string ans="";
        map<char,int> mp;
        for(int i=0;i<str.size();i++){
            if(mp.find(str[i])!=mp.end())
                continue;
            else{
                mp[str[i]]++;
                ans+=str[i];
            }
        }
        return ans;
    }
};
