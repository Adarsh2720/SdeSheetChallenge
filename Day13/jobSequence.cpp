


#include<bits/stdc++.h>

bool comp(vector<int> &a ,vector<int> &b)
{
    if(b[1]>a[1])
        return false;
    return true; 
}

int maxElement(vector<vector<int>> &jobs,int n)
{
    int result=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        result=max(result,jobs[i][0]);
    }
    
    return result;
}

int jobScheduling(vector<vector<int>> &jobs)
{
    
    int n=jobs.size();
    int ans=maxElement(jobs,n);
    vector<bool>vis(ans,false);
    sort(jobs.begin(),jobs.end(),comp);
    
    ans=0;
  
    for(int i=0;i<n;i++)
    {
        int place=jobs[i][0]-1;
        
        if(vis[place]==true)
        {
            while(place>=0 && vis[place]!=false)
                place--;
            
            if(place<0)
                continue;
        }
        vis[place]=true;
        ans+=jobs[i][1];
    }  
    return ans;
        
   
}

