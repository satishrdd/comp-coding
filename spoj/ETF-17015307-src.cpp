// C program to calculate Euler's Totient Function
// using Euler's product formula
#include <stdio.h>
#include<iostream>
 
using namespace std; 
long long phi(long long n)
{
    float result = n;   // Initialize result as n
 
    // Consider all prime factors of n and for every prime
    // factor p, multiply result with (1 - 1/p)
    for (long long p=2; p*p<=n; ++p)
    {
        // Check if p is a prime factor.
        if (n % p == 0)
        {
            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
            result *= (1.0 - (1.0 / (float) p));
        }
    }
 
    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result *= (1.0 - (1.0 / (float) n));
 
    return (long long)result;
}
 
// Driver program to test above function
int main()
{
	
	long cases;
	cin>>cases;
	while(cases--){
		long long n;
		cin>>n;
		cout<<phi(n)<<endl;
	}
   
    return 0;
}
