class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
         // Code here
         Node *temp=*head, *end=NULL, *nxt=NULL, *prev=NULL;
        while(temp){
            nxt=temp->next;
            prev=temp;
            if(nxt){
                temp->next=temp->next->next;
                
                if(end==NULL){
                    end=nxt;
                    end->next=NULL;
                }
                else{
                    nxt->next=end;
                    end=nxt;
                }
            }
            temp=temp->next;
        }
        prev->next=end;
    }
};
