class Solution
{
public:
    struct Node{
        int dist;
        int col;
        int row;
        Node(int a,int b,int c){
            row=a;
            col=b;
            dist=c;
        }
    };

//check function which check for adjacent nodes are landmines or not
    bool check(vector<vector<int>> &mat,int row,int col){
        int n=mat.size();
        int m=mat[0].size();
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        for(int i=0;i<4;i++){
            int newr=dx[i]+row;
            int newc=dy[i]+col;
            if(newr>=0 && newr<n && newc>=0 && newc<m && !mat[newr][newc]) return false;
        }
        return true;
    }
    int findShortestPath(vector<vector<int>> &mat)
    {
       // code here
       queue<Node> pq;
       int n=mat.size();
       int m=mat[0].size();

       for(int i=0;i<n;i++){
           if(mat[i][0] && check(mat,i,0)){
               pq.push(Node(i,0,0));
           }
       }
       int ans=INT_MAX;
       while(!pq.empty()){
           int dist=pq.front().dist;
           int row=pq.front().row;
           int col=pq.front().col;
           mat[row][col]=-1; //mark visited the node which are already visited in mat itself
           pq.pop();
           if(col==m-1) ans=min(ans,dist+1);
           int dx[4]={1,-1,0,0};
           int dy[4]={0,0,1,-1};
           for(int i=0;i<4;i++){
               int newr=dx[i]+row;
               int newc=dy[i]+col;
                if(newr>=0 && newr<n && newc>=0 && newc<m && mat[newr][newc]!=-1 && check(mat,newr,newc) ){
                    pq.push(Node(newr,newc,dist+1));
                }
           }
       }
       if(ans==INT_MAX) return -1;
       return ans;
    }
};
