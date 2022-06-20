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

vector<int> solve(vector<vector<int>>&v)
{
    vector<int>ans;
    int last= v[0][1];
    ans.push_back(v[0][2]);
    for(int i=0;i<v.size();i++)
    {
        if(v[i][0]>=last)
        {
            ans.push_back(v[i][2]);
            last=v[i][1];
        }
    }

    return ans;

}

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    
    int n=start.size();
    
    vector<vector<int>>v;
    for(int i=0;i<n;i++)
        v.push_back({start[i],end[i],i+1});


    sort(v.begin(),v.end(),comp);

    return (solve(v));
}
