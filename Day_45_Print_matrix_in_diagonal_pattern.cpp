class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         // Be aware of edge cases
         vector<int>ans;
         int n = mat.size();
         
         int diag = 2*n-1; // total diagonal
         int r = 0 , c = 0 ;
         while(diag--)
         {
             //cout<<r<<", "<<c<<endl;
             if((r+c)&1) // odd : r++,c-- moving down
             {
                 while( r<n && c>=0) ans.push_back(mat[r++][c--]);
                 if(r==n)c+=2,r-=1;
                 else c++;
             }
             else { // even : r--,c++ :: moving up
                 while(r>=0&&c<n) ans.push_back(mat[r--][c++]);
                 if(c==n) r+=2,c-=1;
                 else r++ ;
             }
         }
         return ans;
    }
};
