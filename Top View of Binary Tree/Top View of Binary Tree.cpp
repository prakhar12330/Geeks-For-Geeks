class Solution
{
    public:
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>res;
        if(root==NULL)return res;
        queue<pair<Node*,int>> q;//(1,0),(2,-1),(3,1)
        q.push({root,0});
        map<int,int>m;
        
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            Node* node=it.first;
            int line=it.second;
            
             if(m.find(line) == m.end())
             {
                 m[line] = node->data;
             }
             
             if(node->left != NULL) {
                q.push({node->left, line-1}); 
             }
             if(node->right != NULL) {
                q.push({node->right, line + 1}); 
             }
        }
        for(auto it : m) {
            res.push_back(it.second); 
        }
        return res;
        
    }

};
