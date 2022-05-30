class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    
    
    int countSetBit(int xorValue)
    {
        int count=0;
        while(xorValue != 0)
        {
            xorValue=xorValue & (xorValue-1);
            count++;
        }
        return count;
    }
    int countBitsFlip(int a, int b){
        
        // Your logic here
        
        int xorValue=a^b;
        
        return countSetBit(xorValue);
    }
};
