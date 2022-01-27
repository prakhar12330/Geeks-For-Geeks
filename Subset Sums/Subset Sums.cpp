class Solution
{
public:

    void formCombinations(int idx,vector<int> &arr, int N,int sum,vector<int> &rst)
    {
       if(idx>=arr.size())
       {
           rst.push_back(sum);
           return;
       }
       //picking condition
       formCombinations(idx+1,arr,N,sum+arr[idx],rst);
       //non-picking condition
       formCombinations(idx+1,arr,N,sum,rst);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>rst;
        int sum=0;
        formCombinations(0,arr,N,sum,rst);
        sort(rst.begin(),rst.end());
        return rst;
    }
};
