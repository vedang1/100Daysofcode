class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_set<int> st;
        Node *temp = head1;
        
        while(temp) {
            st.insert(temp->data);
            temp = temp->next;
        }
        
        temp = head2;
        int cnt = 0;
        while(temp) {
            if(st.find(x-temp->data) != st.end())
                cnt++;
            
            temp = temp->next;
        }
        
        return cnt;
    }
};
