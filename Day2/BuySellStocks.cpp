
#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices){

    int n=prices.size();
    int min_element=prices[0];
    int profit=0;
    for(int i=0;i<n;i++) {
       if(prices[i]<min_element)
           min_element=prices[i];
        if(profit<(prices[i]-min_element))
            profit=prices[i]-min_element;
    }
    return profit;
}
