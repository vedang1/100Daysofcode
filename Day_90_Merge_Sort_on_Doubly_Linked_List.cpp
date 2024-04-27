class Solution {
  public:
    // Function to sort the given doubly linked list using Merge Sort.
    struct Node *sortDoubly(struct Node *head) {
        // Your code here
        vector<int> num;
        struct Node *temp = head;
        while(temp != NULL){
            num.push_back(temp->data);
            temp = temp->next;
        }
        sort(num.begin(),num.end());
        
        temp = head;
        int ind = 0;
        while(temp){
            temp->data = num[ind++];
            temp = temp->next;
        }
        return head;
    }
};
