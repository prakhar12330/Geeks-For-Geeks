bool findPair(int arr[], int size, int n)
{
    //code
    sort(arr,arr+size);
    int lo=0;
    int hi=1;
    
    while(lo<size && hi<size)
    {
        if(arr[hi]-arr[lo]==n)
        {
         return true; 
         break;
        }
        else if(arr[hi]-arr[lo]<n)hi++;
        else lo++;
    }
    return false;
    
}
