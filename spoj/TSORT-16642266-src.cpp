#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<cmath>

using namespace std;



long long power(long long a, long long b)
{
  long long pow = 1;
  while ( b ) 
  {
         if ( b & 1 ) 
         {
           pow = pow * a%10000007;
           --b;
         }
         a = a*a%10000007;
         b = b/2;
  }
  return pow%10000007;
}


int main(int argc, char const *argv[])
{
	/* code */
	long long n;
	scanf("%lld",&n);
	long long ar[n];
	for(long long i=0;i<n;i++){
		scanf("%lld",&ar[i]);
	}
	sort(ar,ar+n);
	for(long long i=0;i<n;i++){
		printf("%lld\n",ar[i]);
	}
	
	return 0;
}
