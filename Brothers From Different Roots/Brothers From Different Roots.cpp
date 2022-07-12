class Solution
{
public:

    void inorderTraversalBST1(Node* root1,vector<int>&v)
    {
        if(!root1)return;
        inorderTraversalBST1(root1->left,v);
        v.push_back(root1->data);
        inorderTraversalBST1(root1->right,v);
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
          vector<int>v1,v2;
          inorderTraversalBST1(root1,v1);
          inorderTraversalBST1(root2,v2);
          unordered_set<int>s(v1.begin(),v1.end());
          
          int countPairs=0;
          for(int i=0;i<v2.size();i++)
          {
           if(s.find(x-v2[i])!=s.end())
            {
               countPairs++;
            }
          }
          
          return countPairs;
    }
};
