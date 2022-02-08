class Solution 
{
    public:
    
    bool isPossible(int A[], int numbook, int numstdnt,int barrier)
    {
        int alctdstdnt=0;
        int pages=0;
        for(int i=0;i<numbook;i++)
        {
            if(A[i]>barrier)return false;
            if(pages+A[i]>barrier)
            {
                alctdstdnt++;
                pages=A[i];
            }
            else
            {
                pages+=A[i];
            }
        }
        if(alctdstdnt<numstdnt)return true;
        return false;
    }
    int findPages(int A[], int numbook, int numstdnt) 
    {
        //Firstly we will be finding out the search space in which we will be applying binary Search//
        int lo=A[0];
        int hi=0;
        for(int i=0;i<numbook;i++)
        {
            hi+=A[i];
            lo=min(A[i],lo);
        }
        int res=-1;
        while(lo<=hi)
        {
           int mid=(lo+hi)>>1;
           if(isPossible(A,numbook,numstdnt,mid))
           {
               res=mid;
               hi=mid-1;
           }
           else
           {
               lo=mid+1;
           }
        }
        return res;
    }
};
