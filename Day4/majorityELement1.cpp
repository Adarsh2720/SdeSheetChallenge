

//Tc->O(n) ans Sc->O(n)
int majorityElement(vector<int>& nums) {

    int n = nums.size();
    int majority = nums[0];
    int count = 1;

    for(int i=1;i<n;++i)
    {
        if(nums[i]==majority)
            count += 1;
        else
        {
            count -= 1;
            if(count==0)
            {
                majority = nums[i];
                count = 1;
            }
        }
    }
    return majority;
}

//Tc-> O(2N)  and Sc-> O(1)
#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {

    //Moore’s Voting Algorithm
        int count = 0;
        int candidate = 0;
        for(int i=0;i<n;i++){
            if(count == 0) candidate = arr[i];
            if(candidate == arr[i]) count++;
            else count--;
        }

    // Candidate successfully found but the occurring
        count = 0;
        for(int i=0;i<n;i++){
           if(arr[i] == candidate) count++;
        }
        if(count<=n/2) return -1;
        return candidate;
}
