class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
         unordered_map<long,long>mp;
        vector<int>ans;
 
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(auto a: mp){
            if(a.second>1)
                ans.push_back(a.first);
        }
        if(ans.empty()) return {-1};
        sort(ans.begin(),ans.end());
        return ans;
    }
};
