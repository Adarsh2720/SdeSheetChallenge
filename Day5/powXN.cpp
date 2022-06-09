
//Tc-> O(n)
int modularExponentiation(int x, int n, int m) {
	
    long long ans=x;
    int result=1;
    
    for(int i=0;i<n;i++)
    {
        result=(result*ans%m)%m;
    }
    
    return (result%m);
    
}



//Tc-> O(logn)

int modularExponentiation(int xx, int n, int m) {

// Write your code here.

    int result=1;
    long long x=xx;

    for(int i = n; i!=0; i/=2){
        if (i%2)  
                result=(result*x%m)%m;
        x=(x%m*x%m)%m;
    }

    return (result%m);

}