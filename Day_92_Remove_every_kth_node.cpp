class Solution {
    public:
    Node* deleteK(Node *head,int K){
      //Your code here
      Node* pre = nullptr;
      Node* temp = head;
      if(K == 1) return nullptr;
      int cnt = 1;
      while(temp){
          if(cnt == K) {
              pre->next = temp->next;
              cnt = 0;
          }
          pre = temp;
          temp = temp->next;
          cnt++;
      }
      return head;
    }
};
