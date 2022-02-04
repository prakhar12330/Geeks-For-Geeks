class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n )
    {
        //code here
        int ans=0;
        unordered_map<int,int> mp;
        int sum=0;
        mp[0]=1;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            ans += mp[sum];
            mp[sum]++;
        }
        return ans;
    }
};
