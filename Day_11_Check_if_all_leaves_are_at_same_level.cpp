class Solution{
  public:
    /*You are required to complete this method*/
    void solve(Node* root,int level,set<int>& s){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            s.insert(level);
        }
        solve(root->left,level+1,s);
        solve(root->right,level+1,s);
        return;
    }
    bool check(Node *root)
    {
         set<int>s;
        int level = 0;
        solve(root,level,s);
        return s.size()==1;
    }
};
