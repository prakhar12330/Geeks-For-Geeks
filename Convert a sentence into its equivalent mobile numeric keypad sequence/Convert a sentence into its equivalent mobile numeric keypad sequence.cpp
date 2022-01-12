# include<bits/stdc++.h>

using namespace std;

/*

Question Statement-Given a sentence in the form of a string, convert it into its equivalent mobile numeric keypad sequence

Examples :


Input : GEEKSFORGEEKS
Output : 4333355777733366677743333557777
For obtaining a number, we need to press a
number corresponding to that character for
number of times equal to position of the
character. For example, for character C,
we press number 2 three times and accordingly.

Input : HELLO WORLD
Output : 4433555555666096667775553

*/
string convert(string arr[],string input )
{
    string output="";
    int n=input.size();
    for(int i=0;i<n;i++)
    {
        if(input[i]==' ')
        {
            output+="0";
        }
        else
        {
            int index=input[i]-'A';
            output+=arr[index];
        }
    }
    return output;
}

int main()
{
    string arr[] = {"2","22","222",
                    "3", "33", "333",
                    "4", "44", "444",
                    "5", "55", "555",
                    "6", "66", "666",
                    "7", "77", "777", "7777",
                    "8", "88", "888",
                    "9", "99", "999", "9999"};
    string input="PRAKHAR";             
    string s=convert(arr,input);
    cout<<s<<endl;

    return 0;
}
