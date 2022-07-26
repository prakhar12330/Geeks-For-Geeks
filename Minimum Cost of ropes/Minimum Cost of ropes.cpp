class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) 
    {
        //First we will try making a priority queue
        priority_queue<long long,vector<long long>,greater<long long>>minheapPQ;
        for(int i=0;i<n;i++){
          minheapPQ.push(arr[i]);
       }
        
        long long cost=0;
        
        while(minheapPQ.size()>1)
        {
            long long a=minheapPQ.top();
            minheapPQ.pop();
            long long b=minheapPQ.top();
            minheapPQ.pop();
            long long sum=a+b;
            cost +=sum;
            minheapPQ.push(sum);
        }
        return cost;
    }
};
