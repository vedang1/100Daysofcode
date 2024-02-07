class Solution{
    public:
     Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root == 0 || root->data == n1 || root->data == n2)
       {
           return root;
       }
       
       Node *left = lca(root->left,n1,n2);
       Node *right = lca(root->right,n1,n2);
       
       if(left == 0)
       {
           return right;
       }
       if(right == 0)
       {
           return left;
       }
       
        return root;
    }
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int get(Node *root , int a ,int &k)
    {
        if(root == 0)
            return -1;
        k++;
        if(root->data == a)
            return k;
        
        int v1 = get(root->left , a , k);
        int v2 = get(root->right , a , k);
        if(v1!=-1)
            return v1;
        if(v2!=-1)
            return v2;
    
        k--;
        return -1;
            
    }
    int findDist(Node* root, int a, int b) {
        Node *rr = lca(root , a ,b);
        int k = 0;
        
        int left= get(rr , a , k); 
        k = 0;
        int right= get(rr , b , k); 
        return left+right-2;
    }
};
