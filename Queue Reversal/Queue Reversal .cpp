void  solveRecurr(queue<int> &q)
{
    //Base Case
    if(q.empty())return;
    
    int x=q.front();
    q.pop();
    solveRecurr(q);
    
    q.push(x);
    
}
queue<int> rev(queue<int> q)
{
    // add code here.
    solveRecurr(q);
    return q;
}
