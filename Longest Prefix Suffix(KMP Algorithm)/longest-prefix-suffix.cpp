class Solution{
  public:		
	int lps(string s)
	{
	    // Your code goes here
	    int ls[s.length()]={0};
	    ls[0]=0;
	    int i=1,len=0;
	    while(i<s.length()){
	        if(s[len] == s[i]){
	            len++;
	            ls[i] = len;
	            i++;
	        }else{
	            if(len ==0){
	                ls[i]=0;
	                i++;
	            }else{
	                len = ls[len-1];
	            }
	        }
	    }
	    
	    
	    return ls[s.length()-1];
	   
	}
};
