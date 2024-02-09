class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
      if(root==NULL)
          return 1;
          
          if(root->left!=NULL && root->right!=NULL){
              
              if(root->data!=root->left->data+root->right->data)
              return 0;
              
              return isSumProperty(root->left) && isSumProperty(root->right);
          }
          
          if(root->left!=NULL && root->right==NULL){
              
              if(root->data!=root->left->data)
              return 0;
              
              return isSumProperty(root->left);
              
          }
          
        if(root->left==NULL && root->right!=NULL){
            if(root->data!=root->right->data)
            return 0;
            return isSumProperty(root->right);
        }
          
          return 1;
    }
};
