class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        unordered_map<int,int> ma;
        for(int i=0;i<n;i++){
            ma[arr1[i]]++;
        }
        for(int i=0;i<m;i++){
            ma[arr2[i]]++;
        }
        vector<int> ans;
        for(auto i : ma){
            ans.push_back(i.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
