class info{
  public:
  int maxi;
  int mini;
  bool isbst;
  int size;
};
class Solution{
    public:
     info solve(Node *root,int &ans){
     if(root==NULL)return {INT_MIN,INT_MAX,true,0};
     
     info left=solve(root->left,ans);
     info right=solve(root->right,ans);
     
     info curnode;
     curnode.maxi=max(root->data,right.maxi);
     curnode.mini=min(root->data,left.mini);
     if(left.isbst&&right.isbst&&(root->data>left.maxi&&root->data<right.mini))curnode.isbst=true;
     else curnode.isbst=false;
     curnode.size=left.size+right.size+1;
     
     if(curnode.isbst)ans=max(ans,curnode.size);
     return curnode;
 }
    int largestBst(Node *root)
    {
    int ans=0;
    solve(root,ans);
    return ans;
    }
};
