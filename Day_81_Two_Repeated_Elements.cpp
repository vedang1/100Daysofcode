class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        vector<int>ans;
        for(int i=0;i<n+2;i++){
            int curr = abs(arr[i]);
            if(arr[curr] > 0){
                arr[curr]*=-1;
            }
            else{
                ans.push_back(curr);
            }
        }
        for(int i=0;i<n+2;i++){
            arr[i] = abs(arr[i]);
        }
        return ans;
    }
};
