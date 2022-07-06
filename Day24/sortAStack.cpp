


void Sort(stack<int> &s,int element)
{
    if(s.empty() || s.top() <= element)
    {
        s.push(element);
        return;
    }
        int x=s.top();
        s.pop();
        Sort(s,element);
        s.push(x);
        return;
}


void sortStack(stack<int> &s)
{
    if(s.empty())
        return;
    
    int x=s.top();
    s.pop();
    sortStack(s);
    Sort(s,x);
	return;
}
