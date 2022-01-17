class Solution{   
public:
    int minimumNumberOfSwaps(string s)
    {
        // code here 
        int open=0;// variable for keeping the track of open brackets 
        int close=0;//variable for keeping the track of close brackets 
        int swap=0;
        int unbalanced=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                open++;
                if(unbalanced>0)
                {
                    swap+=unbalanced;
                    unbalanced--;
                }
            }
            else
            {
                close++;
                unbalanced=close-open;
                
            }
        }
        return swap;
    }
};
