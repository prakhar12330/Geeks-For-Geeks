int search(int arr[], int n, int x, int k)
{
    // Complete the function
    int idx=0;
    while(idx<n)
    {
        if(arr[idx]==x)return idx;
        
        int steps=abs((arr[idx]-x)/k);  /* this will give the no. of steps we should jump in order to reach the place where our target can be (target will be present
        either on that place or at any place after that or the element will not be present */
      
        idx=idx+max(1,steps);  /*Here we are fighting an edge case ,the edge case will make us hop again and again on the same index [Eg-Suppose we are given x=21 and k=20] */
    }
    return -1;
} 
