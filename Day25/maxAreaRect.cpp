


#include<bits/stdc++.h> 

vector<int>nextSmallerElementToRight(vector < int > & heights)
{
    stack<int>s;
    int n=heights.size();
    vector<int>res(n);
    
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            res[i] = s.empty() ? n : s.top();
            s.push(i);
        }
    return res;
}

vector<int>nextSmallerElementToLeft(vector < int > & heights)
{
    stack<int>s;
    int n=heights.size();
    vector<int>res(n);
    
        for(int i=0;i<n;i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            res[i] = s.empty() ? -1: s.top();
            s.push(i);
        }
    return res;
}

int largestRectangle(vector < int > & heights) {
   int ans=INT_MIN;
    
    stack<int>s;
    vector<int>next=nextSmallerElementToRight(heights);
    vector<int>prev=nextSmallerElementToLeft(heights);
    int n=heights.size();
    
    
    for(int i=0;i<n;i++)
    {
        int l=heights[i];
        int b=next[i]-prev[i]-1;
        ans=max(ans,(l*b));
    }
  
    return ans;
 
 }