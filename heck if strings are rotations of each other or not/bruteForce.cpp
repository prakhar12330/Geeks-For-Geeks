// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        int m=s1.size(); // size of the s1 string
        int n=s2.size(); // size of the s2 string
        int count=0;     // count taken to control the flow of while loop 
                         // we are trying that the complete string s1 must rotate(rotate by one)
        while(count<=m)
        {
            int temp=s1[0]; // rotate string by 1 code starts
            for(int i=0;i<m-1;i++)
            {
                s1[i]=s1[i+1];
            }
            s1[m-1]=temp; // rotate string by 1 code ends
            count++;
            if(s1==s2)
            {
                break;
            }
        }
        if(s1==s2)
            {
                return true;
            }
            
        else
        {
            return false;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}
  // } Driver Code Ends
