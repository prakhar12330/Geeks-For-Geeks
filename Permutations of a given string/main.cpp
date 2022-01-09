// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	 
	    vector<string> rst;
	    void pp(string s,string output)
	    {
		    if(s=="")
		    {
		        rst.push_back(output);
		        return;
		    }
		    
		    for(int i=0;i<s.size();i++)
		    {
		        pp(s.substr(0,i)+s.substr(i+1),output+s[i]);
		        
		    }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    string output="";
		    pp(S,output);
		    sort(rst.begin(),rst.end());
		    return rst;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends
