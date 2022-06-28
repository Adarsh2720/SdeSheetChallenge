



long long add(vector<int>&time)
{
    long long sum=0;
    for(auto it:time)
        sum+=it;
    
    return sum;
}


bool isPossible(vector<int>&time,int n,int m,long long mid)
{
    long long dayCount=1;
    long long reqTime=0;
    for(int i=0;i<m;i++)
    {
        if(reqTime+time[i]<=mid)
            reqTime+=time[i];
        else
        {
            dayCount++;
            if(dayCount>n || time[i] > mid)
                return false;
            reqTime=time[i];
        }
    }
    
    return true;
}



long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	
    long long start=0,mid;
    long long end=add(time);
     long long result=-1;
    
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(isPossible(time,n,m,mid))
        {
            result=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    
    return result;
    
 
}
