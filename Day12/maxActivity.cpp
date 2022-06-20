#include<bits/stdc++.h>

bool comp(vector<int>&a,vector<int>&b)
{
    if(b[1]>a[1])
        return true;
    else if(a[1]>b[1])
        return false;
    else if(b[2]>a[2])
        return true;
    return false;
}

int solve(vector<vector<int>>&v)
{
    int last= v[0][1];
    int count=1
    for(int i=0;i<v.size();i++)
    {
        if(v[i][0]>=last)
        {
            count++;
            last=v[i][1];
        }
    }

    return count;

}

int maximumActivity(vector<int> &start, vector<int> &end) {
    
    int n=start.size();
    
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
        v.push_back({start[i],end[i],i+1});


    sort(v.begin(),v.end(),comp);

    return (solve(v));
}
