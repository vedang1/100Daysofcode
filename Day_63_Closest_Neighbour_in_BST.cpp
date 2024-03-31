class Solution {
  public:
    int findMaxForN(Node* root, int n) {
        // code here
        int element=-1;
        while(root)
        {
            if(root->key == n){
                element=root->key;
                break;
            }
            else if(root->key < n){
                element=root->key;
                root=root->right;
            }
            
            else if(root->key > n){
                root=root->left;
            }
            
        }
        
        return element;
    }
};
