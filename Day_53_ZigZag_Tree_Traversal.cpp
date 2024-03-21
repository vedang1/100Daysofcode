class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	queue<Node*>q;
        vector<int>ans;
        q.push(root);
        int flag=1;
        
        if(root==NULL){
            return ans;
        }
        
        while(!q.empty()){
            if(flag==0){
                flag=1;
            }
            else{
                flag=0;
            }
            vector<int>v;
            int size=q.size();
            
           for(int i=0;i<size;i++){
            Node*temp=q.front();
            q.pop();
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
            v.push_back(temp->data);
            
          }
          
          if(flag==1){
                reverse(v.begin(),v.end());
            }
          
           ans.insert(ans.end(),v.begin(),v.end());
        }
        return ans;
    }
};
