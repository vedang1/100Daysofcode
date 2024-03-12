class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> am;
        int s=0;
        int i=0;
    while(s<n){
      if(a[s]>=a[i]){
          
          if(i==n-1&&n>1){
           am.push_back(a[s]);
           s++;
           i=s;
          }}
          else{
              s++;
              i=s;
          }
          i++;
      }
  
  int c=0;
  am.push_back(a[n-1]);

  return am;
        
    }
};
