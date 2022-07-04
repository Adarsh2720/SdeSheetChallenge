

// My Solution

bool isValid(string s) {

	stack<char>st;
	int n=s.size();

	if(n%2!=0)  return false;

	for(int i=0;i<n;i++)
	{
	    if(s[i]==')' || s[i]==']' || s[i]=='}')
	    {
		if(s[i]==')')
		{
		    //If the stack if empty but we counter ) for the cases like ")"
		    if(st.empty() || st.top()!='(')
		        return false;
		    else
		        st.pop();
		}
		else if(s[i]==']')
		{
		    //If the stack if empty but we counter ) for the cases like "]"
		    if(st.empty() || st.top()!='[')
		        return false;
		    else
		        st.pop();
		}
		else
		{
		    //If the stack if empty but we counter ) for the cases like "}"
		    if(st.empty() || st.top()!='{' )
		        return false;
		    else
		        st.pop();
		}
		
	    }
	    else
		st.push(s[i]);
	}

	// If their are some elements present
	if(!st.empty())
	    return false;

	return true;
}

// Optimized Soln



bool isValidParenthesis(string expression)
{
   stack<char>s;
   
    for(auto it:expression)
    {
        if(it == ')' && !s.empty() && s.top()=='(')
            s.pop();
        else if(it == ']' && !s.empty() && s.top()=='[')
            s.pop();
        else if(it == '}' && !s.empty() && s.top()=='{')
            s.pop();
        else
            s.push(it);
    }
    
    return s.empty();
    
}
