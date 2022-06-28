

int sum(vector<int> &boards)
{
    int sum=0;
    for(auto it:boards)
        sum+=it;
   
    return sum;
}

bool isPossible(vector<int>&boards,int k,int mid)
{
    int sum=0,peopleCount=1;
    int n=boards.size();
    
    for(int i=0;i<n;i++) {
        if(sum+boards[i]<=mid)
            sum+=boards[i];
        else {
            peopleCount++;
            if(peopleCount>k || boards[i]>mid)
                return false;
            sum=boards[i];
        }
    }  
    return true;
  
}

int findLargestMinDistance(vector<int> &boards, int k)
{
   int low=0,mid,high=sum(boards),result;
   
    while(low<=high)
    {
        mid=(low+high)/2;
        
        if(isPossible(boards,k,mid))
        {
            result=mid;
            high=mid-1;
        }
        else
            low=mid+1; 
    }
    
    return result;
    
  
}