class Solution
{
    private:
    void inorderTraverse(Node *root, vector<int>& binaryTree) {
        if(root == NULL)
            return;
        
        inorderTraverse(root->left, binaryTree);
        binaryTree.push_back(root->data);
        inorderTraverse(root->right, binaryTree);
    }
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> binaryTree;
        inorderTraverse(root, binaryTree);
        
        return binaryTree;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       int n = A.size();
       Node *root = new Node(A[0]);
       
       for(int i=1; i<n; i+=2) {
           Node *newRoot = new Node(A[i]);
           newRoot->left = root;
           
           if(i+1 <  n) {
               newRoot->right = new Node(A[i+1]);
           }
           
           root = newRoot;
       }
       
       return root;
    }
};
