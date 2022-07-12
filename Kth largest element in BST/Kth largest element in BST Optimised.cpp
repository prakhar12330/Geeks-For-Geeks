class Solution
{
    public:
    int result=-1;
    void inorderTraversalBST(Node *root,int &count,int K)
    {
       if(!root)return;
       inorderTraversalBST(root->right,count,K);
       count++;
       if(count==K)
       {
           result=root->data;
       }
       inorderTraversalBST(root->left,count,K);
       
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int count=0;
        inorderTraversalBST(root,count,K);
        return result;
    }
};
