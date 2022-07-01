

#include<bits/stdc++.h>

//  Tc -> O[(n*k)log(n*k)]
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    vector<int>res;
    for(int i=0; i<k ; i++){
        for(int j=0; j< kArrays[i].size(); j++){
            res.push_back(kArrays[i][j]);
        }
    }
    sort(res.begin(),res.end());
    return res;
}




#include<queue>
#include<algorithm>

typedef pair<int, pair<int,int>> pp;
struct comp{
    bool operator()(pp& a, pp&b){
        return a.first > b.first;
    }
};
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here.
    priority_queue<pp, vector<pp>,comp> pq;
    
    for(int i=0; i<k; ++i){
        pp curr = make_pair(kArrays[i][0], make_pair(i, 0));
        pq.push(curr);
    }
    
    vector<int> res;
    
    while(!pq.empty()){
        auto curr = pq.top();
        pq.pop();
        
        res.push_back(curr.first);
        
        int r = curr.second.first;
        int c = curr.second.second;
        
        if(c+1<kArrays[r].size()){
            pp nextVal = make_pair(kArrays[r][c+1], make_pair(r, c+1));
            pq.push(nextVal);
        }
    }
    return res;
}