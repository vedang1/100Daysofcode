class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        // Code here
        int i = 0, j =0,previ = 0,prevj = 0,ini = 0,inj = 1;
        while( i < n && j < m && i >= 0 && j >= 0)
        {
            int t1 = i,t2 = j;
            if(matrix[i][j] == 0){
                i = i + ini;
                j = j + inj;
            }
            else{
                if((previ == i && prevj < j) || (i == 0 && j == 0)){
                    i = i + 1;
                    ini = 1;
                    inj = 0;
                }
                else if(prevj == j && previ < i){
                    j = j - 1;
                    ini = 0;
                    inj = -1;
                }
                else if(previ == i && prevj > j){
                    i = i - 1;
                    ini = -1;
                    inj =  0;
                }
                else{
                    j = j + 1;
                    ini = 0;
                    inj = 1;
                }
            }
            matrix[t1][t2] = 0;
            previ = t1;
            prevj = t2;
        }
        return {previ,prevj};
    }
};
