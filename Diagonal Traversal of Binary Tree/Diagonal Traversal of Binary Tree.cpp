vector<int> diagonal(Node *root)
{
   // your code here
   queue<Node*> q;
   vector<int> res;
   if(root==NULL)return res;
   q.push(root);
   while(!q.empty())
   {
       Node* temp=q.front();
       q.pop();
       while(temp)
       {
           if(temp->left)q.push(temp->left);
           res.push_back(temp->data);
           temp=temp->right;
       }
   }
   
   return res;
   
}
