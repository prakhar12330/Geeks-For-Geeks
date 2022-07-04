class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> nums, int n)
    {
        // Your code here
        vector<long long>result(n);
        stack<long long>s;
        for(long long i=n-1;i>=0;i--)
        {
            while(!s.empty() && nums[i]>=s.top())
            {
                s.pop();
            }
            if(!s.empty())
                {
                    result[i]=s.top();
                }
            else
                {
                    result[i]=-1;
                }     
                
            s.push(nums[i]);
        }
        return result;
    }
};
