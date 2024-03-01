class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        unordered_map<int , int>m;
        vector<int>v,a;
        sort(arr.begin() , arr.end());
        for(int i = 0 ; i < n ; i++){
            m[arr[i]]+=1;
        }
        for(auto it : m){
            if(it.second == 2){
                v.push_back(it.first);
            }
        }
        if(arr[0] != 1){
            v.push_back(1);
        } 
        if(arr[n-1] != n){
            v.push_back(n);
        }
        for(int i = 1 ; i < n ; i++){
            if(arr[i] - arr[i-1] > 1){
                v.push_back(arr[i] - 1);
            }
        }
        return v;
    }
};
