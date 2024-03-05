class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        int cnt=0;
        int p=0,q=n-1;
        while(p<n){
            if(a[p]<=a[q]){
                cnt=max(cnt,q-p);
                q=n-1;
                p++;
            }
            else{
                q--;
            }
        }
        return cnt;
    }
};
