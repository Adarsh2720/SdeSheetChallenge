#include<bits/stdc++.h>

typedef pair<int,int> pp;

struct comp{
  
    bool operator()(pp const& a,pp const& b)
    {
        return a.second > b.second;
    }
    
    
};



vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    unordered_map<int,int>mp;
    
    for(auto it:arr)
        mp[it]++;
    
    // priority_queue<pp, vector<pp>, greater<pp> > pq;
    
    priority_queue<pp,vector<pp>,comp >pq;
    
    
    
    for(auto it:mp)
    {
        pq.push({it.first,it.second});
        if(pq.size()>k)
            pq.pop();
    }
    vector<int>res;
    
    
    
    while(!pq.empty())
    {
        // cout<<pq.top().first<<" "<<pq.top().second<<"\n";
        res.push_back(pq.top().first);
        pq.pop();
    }
    
    sort(res.begin(),res.end());
    return res;
    
}