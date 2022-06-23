



void solve(string &s,string &temp,vector<bool>&vis,vector<string>&res)
{
    if(s.size()==temp.size())
    {
        res.push_back(temp);
        return;
    }
    
    for(int i=0;i<s.size();i++)
    {
        if(!vis[i])
        {
            vis[i]=true;
            temp.push_back(s[i]);
            solve(s,temp,vis,res);
            vis[i]=false;
            temp.pop_back();
        }
    }
    
    return ;
}





vector<string> findPermutations(string &s) {
    
    vector<string>res;
    string temp;
    vector<bool>vis(s.size(),false);
    solve(s,temp,vis,res);
    return res;
}
