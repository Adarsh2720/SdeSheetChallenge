



long long minCost(long long arr[], long long n) {
    
    long long cost=0;
    
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    
    for(ll i=0;i<n;i++)
        pq.push(arr[i]);
    
    while(pq.size()!=1) {

        ll num1=pq.top();
        pq.pop();
        ll num2=pq.top();
        pq.pop();
        
        ll c=num1+num2;
        pq.push(c);
        cost+=c;
        
    }
    return cost;
}