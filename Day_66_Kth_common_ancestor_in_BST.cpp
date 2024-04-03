class Solution
{
    public:
    Node* lca(Node *root, int x, int y, map<Node *, Node*> &par)
    {
        if(root == NULL)
            return NULL;
        if(root->data == x || root->data == y)
            return root;
        if(root->left)
            par[root->left]  = root;
        if(root->right)
            par[root->right] = root;
        Node *left  =  lca(root->left, x, y, par);
        Node *right =  lca(root->right, x, y, par);
        if(left == NULL && right == NULL)
            return NULL;
        else if(right == NULL)
            return left;
        else if(left == NULL)
            return right;
        else if(left && right)
            return root;
            
    }
    int kthCommonAncestor(Node *root, int k,int x, int y)
    {
        map<Node *, Node*> par;
        Node *ans = lca(root, x, y, par);
        k--;
        while(k)
        {
            if(ans == root)
                return -1;
            ans = par[ans];
            k--;
        }
        return ans->data;
    }
};
