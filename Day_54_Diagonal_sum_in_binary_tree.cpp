class Solution
{
    public:
    map<int,int> mp;
    void f(Node* root,int x,int y)
    {
        if(root)
        {
            mp[(y-x)]+=root->data;
            f(root->left,x-1,y+1);
            f(root->right,x+1,y+1);
            
        }
        
    }
    vector <int> diagonalSum(Node* root) {
        // Add your code here
        int x=0,y=0;
        f(root,x,y);
        vector<int> ans;
        for(auto it:mp)
        {
            
           ans.push_back(it.second);
        }
        return ans;
    }
};
