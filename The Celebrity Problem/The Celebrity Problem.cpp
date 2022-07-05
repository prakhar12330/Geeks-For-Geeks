class Solution 
{
    public:
    
    bool knows(vector<vector<int> >& M,int a ,int b)
    {
        if(M[a][b]==1)return true;
        else return false;
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        //Step01 push all the elements in stack
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
        //Step02
        while(s.size()>1)
        {
           int a=s.top();
           s.pop();
           int b=s.top();
           s.pop();
           
           if(knows(M,a,b))
           {
               s.push(b);
           }
           else
           {
               s.push(a);
           }
           
          
        }
        int potCand=s.top();
         //Step03
          bool rowCheck=false;
          int zerocount=0;
          for(int i=0;i<n;i++)
          {
              if(M[potCand][i]==0)
              {
                  zerocount++;
              }
          }
          if(zerocount==n)
          {
              rowCheck=true;
          }
          
          bool colCheck=false;
          int onecount=0;
          for(int i=0;i<n;i++)
          {
              if(M[i][potCand]==1)
              {
                  onecount++;
              }
          }
          if(onecount==n-1)
          {
              colCheck=true;
          }
          
          if(rowCheck==true and colCheck==true)
          {
              return potCand;
          }
          else
          {
              return -1;
          }
    }
};
