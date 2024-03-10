class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node *temp = head;
        
        int index = 0;
        while(temp!=NULL)
        {
            index++;
            temp = temp->next;
        }
        
        if(n > index)
        {
            return -1;
        }
        int l = 0;
        temp = head;
        while((index-n) != l)
        {
            l++;
            temp = temp ->next;
        }
        
        return temp->data;
    }
};
