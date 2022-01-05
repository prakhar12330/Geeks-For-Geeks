class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size()!= s2.size())
        {
            return false;
        }
        string text=s1+s1;
        if(text.find(s2)!= string::npos) // as a return type string::npos means no matches //
        {
            return true;
        }
        return false;
    }
};
