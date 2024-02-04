class Solution {
public:
    int reverse(Node* &head){
        while(head->next!=NULL && head->data==0){
            head = head->next;
        } // to manage leading zeroes
        
        Node* prev = NULL;
        Node* curr = head;
        int n = 0;
        while(curr){
            n++;
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head = prev;
        return n; // returns size
    }
    
    Node* subtract(Node* head1, Node* head2){
        Node* prev = NULL;
        int borrow = 0; // indicates are we taking borrow from next step
        
        while(head1 && head2){
            Node* temp = new Node(0);
            int x = head1->data + borrow;
            borrow = 0;
            
            if((x-head2->data)<0){
                // if cant subtract take borrow so it becomes +10
                x += 10;
                borrow = -1;
            }
    
            temp->data = x-head2->data;
            temp->next = prev;
            prev = temp;
            head1 = head1->next;
            head2 = head2->next;
            
        }
        
        //put leftover nodes
        while(head1){
            Node* temp = new Node(0);
            temp->data = head1->data+borrow;
            borrow = 0;
            if(temp->data<0){
                temp->data += 10;
                borrow = -1;
            }
            temp->next = prev;
            prev = temp;
            head1 = head1->next;
        }
        return prev;
    }

    Node* subLinkedList(Node* head1, Node* head2) {
        
        int n1 = 0, n2 = 0;
        n1 = reverse(head1);
        n2 = reverse(head2);
        
        //storing greater number in head1 always
        if(n2>n1){
            swap(head1, head2);
        }
        else if(n1==n2){
            int cnt1 = 0, cnt2 = 0;
            Node* temp1 = head1;
            Node* temp2 = head2;
            while(temp1){
                if(temp1->data>temp2->data){
                    cnt1 = 1;
                    cnt2 = 0;
                }
                else if(temp1->data<temp2->data){
                    cnt2 = 1;
                    cnt1 = 0;
                }
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            if(cnt2>cnt1) swap(head1, head2);
        }
        
        Node* ans = subtract(head1, head2);
        
        // to avoid leading zeroes
        while(ans->next!=NULL && ans->data==0) ans = ans->next;
        return ans;
        
        return NULL;
    }
};
