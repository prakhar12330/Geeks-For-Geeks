class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    
    void inorderTraversalBT(Node *root,vector<int> &v)
    {
        if(!root)return;
        inorderTraversalBT(root->left,v);
        v.push_back(root->data);
        inorderTraversalBT(root->right,v);
    }
    void inorderTraversalBST(Node *root,vector<int> &v,int &i)
    {
        if(!root)return;
        inorderTraversalBST(root->left,v,i);
        root->data=v[i];
        i++;
        inorderTraversalBST(root->right,v,i);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int> v;
        inorderTraversalBT(root,v);
        
        sort(v.begin(),v.end());
        int i=0;
        inorderTraversalBST(root,v,i);
        return root;
    }
};
