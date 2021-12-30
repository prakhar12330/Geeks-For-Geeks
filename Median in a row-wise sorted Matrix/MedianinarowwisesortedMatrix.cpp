// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c)
    {
        // code here  
        int startval=1;
        int endval=2000;
        int n=r*c;
        while(startval<=endval)
        {
           int midval=(endval+startval)/2;
           int ans=0;
           for(int i=0;i<r;i++)
           {
               int l=0;
               int h=c-1;
               while(l<=h)
               {
               int m=l+(h-l)/2;
               if(matrix[i][m]<=midval)l=m+1;
               else h=m-1;
               }
               ans+=l;
           }
           if(ans<=n/2)startval=midval+1;
           else endval=midval-1;
          
           
        }
        return startval;
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends
