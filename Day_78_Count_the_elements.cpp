class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        // Your code goes here;
        int sizeb = b.size();
        sort(b.begin(),b.end());
        vector<int> ans;
        
        for(int i = 0; i < q; ++i) {
            int ind = query[i];
            int x = a[ind];

            // index of first element greater than current element.
            auto it = upper_bound(b.begin(),b.end(), x) - b.begin();        
            ans.push_back(it);
        }
        return ans;
    }
};
