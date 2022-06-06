#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
    // step 1. for find the number such that arr[i] < arr[i+1] from right to left
    int i=n-2;
    while(i>=0)
    {
        if(arr[i]<arr[i+1])
            break;
        i--;
    }
    
    // 2.  find the element which is greater than arr[i] from right to left
    if(i>=0)
    {
        int j=n-1;
        while(arr[j]<=arr[i])   
                j--;
        swap(arr[i],arr[j]);
    }
    
    i++;
    
    //3. reverse the array
    reverse(arr.begin()+i,arr.end());
    
    return arr;
    
}