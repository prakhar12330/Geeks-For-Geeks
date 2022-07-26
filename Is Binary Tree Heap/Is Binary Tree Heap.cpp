class Solution {
  public:
   int countTotalNode(struct Node* root)
   {
       if(!root)return 0;
       int ans=1+countTotalNode(root->left)+countTotalNode(root->right);
       return ans;
   }
   bool isCBT(struct Node*root,int curr_idx,int nodecount)
   {
       if(!root)return true;
       if(curr_idx>=nodecount)return false;
       else
       {
           bool left=isCBT(root->left,2*curr_idx+1,nodecount);
           bool right=isCBT(root->right,2*curr_idx+2,nodecount);
           return left&&right;
       }
   }
   bool isMaxHeap(struct Node*root)
   {
       if(!root->left && !root->right)return true;
       if(!root->right)return root->data>root->left->data;
       else
       {
           return (root->data>root->left->data) && (root->data>root->right->data) &&(isMaxHeap(root->left)&&isMaxHeap(root->right));
       }
   }
   bool isHeap(struct Node* root)
   {
    //When It Will Be A Complete Binary Tree And Also Satisfies The Property Of Max Heap
    int curr_idx=0;
    int nodecount=countTotalNode(root);
    return isCBT(root,curr_idx,nodecount)&&isMaxHeap(root);
   }
};
