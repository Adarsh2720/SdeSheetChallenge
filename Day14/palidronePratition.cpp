


bool isPalidrone(string &s,int start,int end)  {
    while(start<=end)  {
        if(s[start++]!=s[end--])
            return false;
    }
    return true;
}


void solve(int index,string &s,vector<string>temp,vector<vector<string>>&ans)
{
    if(index==s.size()) {
        ans.push_back(temp);
        return;
    }

    for(int i=index;i<s.size();i++)  {
        if(isPalidrone(s,index,i)) {
            temp.push_back(s.substr(index,i-index+1));
            solve(i+1,s,temp,ans);
            temp.pop_back();
        }
    }
}


vector<vector<string>> partition(string s) {

    vector<vector<string>>ans;
    vector<string>temp;
    solve(0,s,temp,ans) ; 
    return ans;

}
