class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    bool check(Node* root, int k, int dist) {
        if(root == NULL) return 0;
        if(root -> right == NULL && root -> left == NULL) return k == dist;
        
        return (check(root -> right, k, dist + 1) | check(root -> left, k, dist + 1));
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
    	if(root == NULL) return 0;
        
        return (int)check(root, k, 0) + printKDistantfromLeaf(root -> right, k) + printKDistantfromLeaf(root -> left, k);
    }
};
