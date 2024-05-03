class Solution
{
    public:
    // function should print the nodes at k distance from root
    void solve(Node*root,int k,vector<int>&ans){
        if(!root){
            return;
        }
        if(k==0){
            ans.push_back(root->data);
        }
        solve(root->left,k-1,ans);
        solve(root->right,k-1,ans);
    }
    // function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      vector<int>ans;
      solve(root,k,ans);
      return ans;
    }
};
