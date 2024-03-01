class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> res;
        bool visited[V];
        for(int i=0;i<V;i++)
        visited[i]=false;
        queue<int> q;
        q.push(0);
        visited[0]=true;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            res.push_back(curr);
            for(int p : adj[curr])
             if(visited[p]==false){
                 visited[p]=true;
                 q.push(p);
             }
        }
        
        return res;
    }
};
