class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        // Code here
        struct Node *vowel = new Node(-1);
        struct Node *consonant = new Node(-1);
        
        struct Node *ptr1 = vowel;
        struct Node *ptr2 = consonant;
        
        while(head) {
            char ch = head->data;
            
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                ptr1->next = head;
                ptr1 = ptr1->next;
            }
            else {
                ptr2->next = head;
                ptr2 = ptr2->next;
            }
            
            head = head->next;
        }
        
        ptr2->next = NULL;
        ptr1->next = consonant->next;
        
        return vowel->next;
    }
};
