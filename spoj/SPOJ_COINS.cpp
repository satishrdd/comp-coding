    #include<iostream>
#include<stdio.h>
    using namespace std;
    
    int x[1000000]={0};
    long long int solve(long long int n)
    {
        if (n<12)
            return n;
        if (n<1000000)
        {
            if (x[n]!=0)
                return x[n];
            x[n] = solve(n/2)+solve(n/3)+solve(n/4);
            return x[n];
        }
        if (n>=1000000)
        {
            return solve(n/2)+solve(n/3)+solve(n/4);
        }
    }
    int main()
    {
      
        long long int n;
        while(scanf("%lld",&n)!=EOF)
        {
     
            printf("%lld\n",solve(n));
        }
     
        return 0;
    }