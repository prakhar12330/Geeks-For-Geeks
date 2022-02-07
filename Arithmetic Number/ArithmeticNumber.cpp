class Solution{
public:
    int inSequence(int A, int B, int C)
    {
        /*if the common diffrence is zero then the first term will be only element in 
        the sequence */
        if(C==0)
        {
          if(A==B)return 1;
          else return 0;
        }
        else /* nth term of an A.P (An)=a+(n-1)*d */
        {
            if((B-A)/C<0)
            {
               return 0; 
            }
            else
            {
               if((B-A)%C==0)
               {
                 return 1;  
               }
               else
               {
                  return 0; 
               }
            }
        }
    }
};
