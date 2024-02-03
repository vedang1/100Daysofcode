class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
            long long unsigned int ans=0, M=1e9+7;
        Node *curr=head;
        while(curr) {
            ans = ans*2+curr->data;
            ans %= M;
            curr=curr->next;
        }
        return ans;
        }
};
