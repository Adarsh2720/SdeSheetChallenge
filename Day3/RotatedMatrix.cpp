

// Tc-> O(n*n) Sc-> O(n*n)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        vector<vector<int>>Dmatrix=matrix;

        int n=matrix.size(),m=matrix[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                matrix[j][n-i-1]=Dmatrix[i][j];
        }

    }
};


//  Tc-> O(n*n) Sc-> O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        //vector<vector<int>>Dmatrix=matrix;

        int n=matrix.size(),m=matrix[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
                swap(matrix[i][j],matrix[j][i]);
        }


        for(int i=0;i<n;i++)
            reverse(matrix[i].begin(),matrix[i].end());

    }
};
