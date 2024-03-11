vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   if(!root)
   return ans;
   queue<Node*>q;
   q.push(root);
   while(q.size()>0)
   {
       int s=q.size();
       for(int i=0;i<s;i++)
       {
           Node*temp=q.front();
           if(i==0)
           ans.push_back(temp->data);
           if(temp->left)
           q.push(temp->left);
           if(temp->right)
           q.push(temp->right);
           q.pop();
       }
       
   }
   return ans;
}
