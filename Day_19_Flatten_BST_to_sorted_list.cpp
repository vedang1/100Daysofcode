class Solution
{
public:
    Node* prev = NULL;
    Node* start = NULL;
    Node *flattenBST(Node *root)
    {
        // code here
        // we explore the left subtree in a bst 
    
    if(root == NULL) return NULL;
    flattenBST(root->left);
    
    // come to current node (root)
    
    if(prev!=NULL){prev->right=root;prev->left=NULL;}
    if(prev==NULL){
        start = root;
    }
    prev=root;
    
    // explore the right sub tree
    
    flattenBST(root->right);
    
    prev->right=NULL;
    prev ->left=NULL;;
    return start;
    }
};
