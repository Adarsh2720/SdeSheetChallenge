


// Tc-> O(N)  and Sc-> O(1)


int findMinimumCoins(int amount) 
{
   vector<int>coins={1,2,5,10,20,50,100,500,1000};
    
    int count=0;
    int i=coins.size()-1;
    
    while(amount!=0)
    {
        if(amount>=coins[i])
        {
            count++;
            amount=amount-coins[i];
        }
        else
            i--;
    }
    
    return count;
   
}

