

// Tc-> O(m*logn)
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here

    for(int i=0;i<m;i++)
    {
        if(mat[i][n-1]>=target)
            return (binary_search(mat[i].begin(),mat[i].end(),target));
    }
    return false;
}
