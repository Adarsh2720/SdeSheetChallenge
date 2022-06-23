


void solve(int i,vector<int> &ans,int sum,vector<int>&num,int n)
{
    if(i==n)
    {
        ans.push_back(sum);
        return;
    }
    
    solve(i+1,ans,sum+num[i],num,n);
    solve(i+1,ans,sum,num,n);
    return;
}


vector<int> subsetSum(vector<int> &num)
{
    vector<int>ans;
    int sum=0;
    solve(0,ans,sum,num,num.size());
    sort(ans.begin(),ans.end());
    return ans;
    
}
