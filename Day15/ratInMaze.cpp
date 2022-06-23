

class Solution{
    public:
    
    void mazePath(int i,int j,vector<vector<int>>m,int n,string s,vector<string >&  result){
    
    if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0 ){
        return;
    }
    else if(i == n-1 && j == n-1){
        result.push_back(s);
        return;
    }
    else{
        m[i][j]=0;
        mazePath(i+1,j,m,n,s +'D',result);
        mazePath(i-1,j,m,n,s +'U',result);
        mazePath(i,j+1,m,n,s +'R',result);
        mazePath(i,j-1,m,n,s +'L',result);
        m[i][j]=1;
    }
}
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
    vector<string > result;
    mazePath(0,0,m,n,"",result);
    sort(result.begin(),result.end());
   
   return result;
    }
};




class Solution{
    public:
    string dir="DRUL";
    int Xaxis[4]={1,0,-1,0};
    int Yaxis[4]={0,1,0,-1};
    
    void solve(int i,int j,string s,vector<vector<int>> &vis,int n,int m,vector<string>&ans)
    {
        if(i>=n||i<0||j>=m||j<0||vis[i][j]==0)
            return;
        if(i==n-1 && j==m-1){
            ans.push_back(s);
            return;
        }
        vis[i][j]=0;
        for(int index=0;index<4;index++)
            solve(i+Xaxis[index],j+Yaxis[index],s+dir[index],vis,n,m,ans);
        vis[i][j]=1;
    }
    
    vector<string> findPath(vector<vector<int>> &vis, int n) {
        vector<string>ans;
        solve(0,0,"",vis,n,n,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
