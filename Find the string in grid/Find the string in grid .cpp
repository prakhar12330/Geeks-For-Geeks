// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    bool explore(vector<vector<char>>grid, string word,int i,int j,int si )
    {
        int di[]={-1, -1, -1, 0, 0, 1, 1, 1};
        int dj[]={-1, 0, 1, -1, 1, -1, 0, 1};
        if(si==word.size())return true;
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size())return false;
        if(word[si]!=grid[i][j])return false;
        char mychar=grid[i][j];
        grid[i][j]='@';
        for(int d=0;d<8;d++)
        {
            if(explore(grid,word,i+di[d],j+dj[d],si+1))
            {
                grid[i][j]=mychar;
                return true;
            }
        }
        grid[i][j]=mychar;
        return false;
    }
    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word)
	{
	    // Code here
	    vector<vector<int>>rst;
	    int n=grid.size();
	    int m=grid[0].size();
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(explore(grid,word,i,j,0))
	            {
	               rst.push_back({i,j});
	            }
	        }
	    }
	    return rst;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
	}
	return 0;
}  // } Driver Code Ends
