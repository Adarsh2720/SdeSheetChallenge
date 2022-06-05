#include <bits/stdc++.h>

//Tc -> O(n*n)  where n is the number of rows
vector<vector<long long int>> printPascal(int n)
{
  vector<vector<long long int>> mat;

    for(int i=1;i<=n;i++)
    {
        vector<long long int>v(i,1);

        if((i-1)>=2)
        {
            for(int j=1;j<i-1;j++)
                v[j]=mat[i-2][j-1]+mat[i-2][j];
        }
        mat.push_back(v);
    }

    return mat;
}
