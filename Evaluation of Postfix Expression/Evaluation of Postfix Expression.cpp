
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int eval(int a, int b, char oper){
        if(oper == '+')
        return a+b;
        else if(oper == '-')
        return a-b;
        else if(oper == '*')
        return a*b;
        return a/b;
    }
    int evaluatePostfix(string s)
    {
        // Your code here
        int ans=0;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9')
                st.push(s[i]-'0');
            else{
                int num2=st.top();
                st.pop();
                int num1=st.top();
                st.pop();
                ans=eval(num1,num2,s[i]);
                st.push(ans);
            }    
        }
        return ans;
    }
};

