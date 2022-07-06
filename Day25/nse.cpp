#include<bits/stdc++.h>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int>s;
    vector<int>ans(n);
    
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() && s.top()>=arr[i])
            s.pop();
        if(s.empty())
            ans[i]=-1;
        else
            ans[i]=s.top();
        s.push(arr[i]);
    }
    
    
    return ans;
}