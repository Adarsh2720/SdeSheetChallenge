#include<bits/stdc++.h>



bool isPossible(vector<int> &stalls,int mid,int k)
{
    int cowCount=1;
    int lastPos=stalls[0];
    int n=stalls.size();
    
    for(int i=0;i<n;i++)
    {
        if(stalls[i]-lastPos >= mid)
        {
            cowCount++;
            if(cowCount==k)
                return true;
            lastPos=stalls[i];
        }
    }
    
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int low=0,high=stalls[n-1],mid;
    int result=0;
    
        
    while(low<=high)
    {
        mid=low+(high-low)/2;
        
        if(isPossible(stalls,mid,k))
        {
            result=mid;
            low=mid+1; // since we have to find the maximum distance
            //end=mid-1 ;  if we have to find the minimum distance
        }
        else
            high=mid-1;
    }
    
    return result;   
}