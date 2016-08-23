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
           pow = pow * a%1000000007;
           --b;
         }
         a = a*a%1000000007;
         b = b/2;
  }
  return pow%1000000007;
}
 
 
 
int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	long long n,k;
	cin>>cases;
	while(cases--){
		cin>>n>>k;
		if(k==1&&n==1){
			cout<<1<<endl;
		}else
		cout<<((k%1000000007)*(power(k-1,n-1)%1000000007))%1000000007<<endl;
		
	}
	return 0;
}
