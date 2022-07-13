bool solve(Node *root,int minRange,int maxRange)
{
    if(!root)return false;
    if(minRange==maxRange)return true;
    
    return  solve(root->left,minRange,root->data-1) or solve(root->right,root->data+1,maxRange);
}
bool isDeadEnd(Node *root)
{
    //Your code here
    return solve(root,1,INT_MAX);
}
