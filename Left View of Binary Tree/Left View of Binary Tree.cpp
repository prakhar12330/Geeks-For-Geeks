void recursive(Node *root,int lvl,vector<int>& res)
{
    if(root==NULL)return;
    
    if(res.size()==lvl)res.push_back(root->data);
    
    recursive(root->left,lvl+1,res);
    recursive(root->right,lvl+1,res);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>res;
   recursive(root,0,res);
   return res;
}
