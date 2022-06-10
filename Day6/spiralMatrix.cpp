
vector<int> spiralOrder(vector<vector<int>>& matrix) {

    vector<int>v;

    int top=0,left=0,down=matrix.size()-1,right=matrix[0].size()-1;
    int dir=0;

    while(top<=down && left<=right)
    {
        if(dir==0)
        {
            for(int i=left;i<=right;i++)
                v.push_back(matrix[top][i]);
            top++;
        }
        else if(dir==1)
        {
            for(int i=top;i<=down;i++)
                v.push_back(matrix[i][right]);
            right--;
        }
        else if(dir==2)
        {
            for(int i=right;i>=left;i--)
                v.push_back(matrix[down][i]);
            down--;
        }
        else
        {
            for(int i=down;i>=top;i--)
                v.push_back(matrix[i][left]);
            left++;
        }
        dir=(dir+1)%4;
    }


    return v;


}
