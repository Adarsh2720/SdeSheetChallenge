#include <bits/stdc++.h>

//These method have a Tc-> O(3*(N*M)) ans Sc-> (N+M)
void setZeros(vector<vector<int>> &matrix)
{
	vector<int> row,col;
    int n=matrix.size();
    int m=matrix[0].size();

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(matrix[i][j]==0) {
                row.push_back(i);
                col.push_back(j);
            }
        }
    }

    for(auto it:row) {
        for(int i=0;i<m;i++)
            matrix[it][i]=0;
    }

    for(auto it:col) {
        for(int i=0;i<n;i++)
            matrix[i][it]=0;
    }

}

//These method have a Tc-> O(2*(N*M)) ans Sc-> (N+M)
#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int> row(n,1);
    vector<int> col(m,1);

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(matrix[i][j]==0) {
                row[i]=0;
                col[j]=0;
            }
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
        {
            if(row[i]==0 || col[j]==0 )
            {
                matrix[i][j]=0;
            }
        }
    }

}





