class Solution{
public:	
	bool findcheck(unordered_map<char,int> &mp){
        int k=0;
        for(auto it:mp){
            if(k==0 && it.second>0){
                k=it.second;
                continue;
            }
            if(it.second>0){
                if(it.second!=k)return false;
            }
        }
        return true;
    }
    bool sameFreq(string s)
    {
        // code here
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        bool check=false;
        for(auto it : mp){
            int k=it.second;
            if(findcheck(mp)==true){
                return true;
            }
            else{
                mp[it.first]--;
                if(findcheck(mp)==true){
                    return true;
                }
            }
            mp[it.first]=k;
        }
        return false;
        
    }
};
