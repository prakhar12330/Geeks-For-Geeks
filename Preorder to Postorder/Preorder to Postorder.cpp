class Solution{
public:
    
    Node* buildBST(int pre[],int l,int h)
    {
        if(l>h)return NULL;
        Node* root=newNode(pre[l]);
        int i=l+1;
        while(pre[i]<pre[l]&& i<=h)
        {
            i++;
        }
        root->left = buildBST(pre, l+1, i-1);
        root->right = buildBST(pre, i, h);
        return root;
    }
    Node* post_order(int pre[], int size)
    {
        //if the number of elements in the input array is zero return NULL
        if(size==0)return NULL;
        return buildBST(pre,0,size-1);
    }
};
