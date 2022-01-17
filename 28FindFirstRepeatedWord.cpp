# include<bits/stdc++.h>

using namespace std;


void findRepeated(string &u)
{
    unordered_map<string,int> rst;
    string temp="";
    string ans="";
    for(int i=u.size()-1;i>=0;i--)
    {
        if(u[i]!=' ')
        {
           temp+=u[i];
           
        }
        else
        {
            rst[temp]++;
            if(rst[temp]>1){ans=temp;}
            temp="";
        }
        

    }
    rst[temp]++;
    if (rst[temp] > 1)
    {
        ans = temp;
    }
    if (ans != "")
    {
        reverse(ans.begin(),ans.end());
        cout << "Repeated word is:" << ans << endl;
    }
    else
    {
        cout << "No Repeated word" << endl;
    }
}
int main()
{
    string u = "Ravi had been saying that he had been there";
    findRepeated(u);

    return 0;
}