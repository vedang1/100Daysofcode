class Solution
{
public:
    int ans_len = 0;
    int ans = 0;
    void cal(Node *root ,int curr , int len )
    {
        if(root == 0)
        {
            if(ans_len <  len)
            {
                ans_len = len;
                ans = curr;
            }
            else if(ans_len == len)
            ans = max(ans , curr);
            return ;
        }
        cal(root->left , curr + root->data , len +1);
        cal(root->right , curr + root->data , len+1);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        cal(root , 0 ,0);
        return ans;
    }
};
