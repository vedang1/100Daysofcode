class Solution
{
    public:
    int ans=INT_MAX;
    int prev=-1;
    void inorder(Node *root){
        if(!root) return;
            inorder(root->left);
            if(prev!=-1) ans=min(ans, abs(prev-root->data));
            prev=root->data;
            inorder(root->right);
    }
    int absolute_diff(Node *root)
    {
        //Your code here
        inorder(root);
        return ans;
        
    }
};
