class Solution{
    public:
    #define p pair<int,pair<int,int>>//humne p naam ka ek pair define krdiya
    pair<int,int> findSmallestRange(int arr[][N], int n, int k)
    {
         //pehle hum minimum ar maximum element ko INT_MAX ar INT_MIN rakhege
         int maxi=INT_MIN;
         int mini=INT_MAX;
         int range=INT_MAX;
         //hum min heap initialize krege//
         priority_queue<p,vector<p>,greater<p>>pq;
         int low=0,high=0;
         //saare list ke pehle element to minheap me insert krdo
         for(int i=0;i<k;i++)
         {
            pq.push({arr[i][0],{i,0}});//har element ke liye hum khud element ko,uski row ar uske 
            //column ko hum heap ke andar daal rhe hai
            mini=min(mini,arr[i][0]);
            maxi=max(maxi,arr[i][0]);
         }
         //ab hum heap wale operation ka implementation krege//
         while(!pq.empty())
         {
             p temp=pq.top();
             pq.pop();
             
             int mini1=temp.first;
             if(range>maxi-mini1)
             {
                 mini=mini1;
                 low=mini;
                 high=maxi;
                 range=maxi-mini;
             }
              int i=temp.second.first;//row number
              int j=temp.second.second;//column number
              if(j>=n-1)
              { //if fully traversed
                 break;
              }
              pq.push({arr[i][j+1],{i,j+1}});
              if(maxi <arr[i][j+1])
              {
               maxi=arr[i][j+1];
              }
         }
         return {low,high};
    }
};
