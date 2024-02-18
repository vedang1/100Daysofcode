class Solution
{
    public:
        /*You are required to complete below method */
        void dfs(Node* root,int &sum){

            if(root==NULL){
                return;
            }

            if(root->left==NULL && root->right==NULL){
                sum+=root->data;
            }

            dfs(root->left,sum);
            dfs(root->right,sum);
        }
        int sumOfLeafNodes(Node *root ){
             /*Your code here */
             int sum=0;
             dfs(root,sum);
             return sum;
        }
};
