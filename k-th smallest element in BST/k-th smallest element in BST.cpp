class Solution {
  public:
  int result=-1;
  void inorderTraversalBST(Node *root,int &count,int K)
   {
       if(!root)return;
       inorderTraversalBST(root->left,count,K);
       count++;
       if(count==K)
       {
           result=root->data;
       }
       inorderTraversalBST(root->right,count,K);
       
   }
    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K) 
    {
        // add code here.
        int count=0;
        inorderTraversalBST(root,count,K);
        return result;
    }
};
