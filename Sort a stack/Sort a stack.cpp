void sortedInsert(stack<int> &s,int x)
{
    //Base Case
    if(s.empty() or(!s.empty() && s.top()<=x))
    {
        s.push(x);
        return;
    }
    //Trying to insert at the bottom
    int a=s.top();
    s.pop();
    sortedInsert(s,x);
    
    s.push(a);
    
}
void SortedStack :: sort()
{
   //Base Case 
   if(s.empty())return;
   
   
   int x=s.top();
   s.pop();
   sort();
   
   sortedInsert(s,x);
}
