class Solution
{
    public:
    void inorderTraversalBST(Node *root,vector<int> &v)
    {
        if(!root)return;
        inorderTraversalBST(root->left,v);
        v.push_back(root->data);
        inorderTraversalBST(root->right,v);
    }
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int> v;
        inorderTraversalBST(root,v);
        reverse(v.begin(),v.end());
        return v[K-1];
    }
};
