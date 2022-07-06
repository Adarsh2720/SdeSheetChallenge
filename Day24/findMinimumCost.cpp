

#include<bits/stdc++.h>

int findMinimumCost(string str) {

    stack<int>s;
    int n=str.size();
    // Step 1. Include all the parenthesis,  
    for(int i=0;i<n;i++)
    {
        if(str[i]=='{')
            s.push(str[i]);
        else
        {
            if(s.empty() || s.top()!='{')
                 s.push(str[i]); // Including all the non pairs
            else
               s.pop(); // removing all the pairs
        }
    }
    
    
    int ans=0;
    
    // Step2. if stack is empty for all non paring elements
    if(!s.empty())
    {
        // if size is odd there will be no pairs existing
        if(s.size()%2 !=0 )
            return -1;
        else
        {
           while(!s.empty())
           {
               char c1=s.top();
               s.pop();
               char c2=s.top();
               s.pop();
               
               if((c1 == '{' && c2 == '{') || (c1 == '}' && c2 == '}'))
                   ans++; // if and c2 are facing same direction
               else
                   ans+=2; // if c1 and c2 facing in opp direction ie "}{"
           }
        }
    }

    return ans;

}



//Love babar soln
#include <stack>
int findMinimumCost(string str) {
  // Write your code here
    stack<char> s;
    
     if(str.length()%2 !=0)
        return -1; 
    
    int n=str.size();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='{')
            s.push(str[i]);
        else
        {
            if(s.empty() || s.top()!='{')
                 s.push(str[i]); // Including all the non pairs
            else
               s.pop(); // removing all the pairs
        }
    }
    
    
        int openBracket =0, closeBracket=0;
        while(!s.empty()){    //till stack not empty populate the count values
            if(s.top() =='{'){
                closeBracket++;    //b=count open brace
            }
            else{
                openBracket++;
            }
            s.pop();    //aage badao value
        }
        return  ((openBracket+1)/2 + (closeBracket+1)/2);
}
















