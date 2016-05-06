#include<iostream>
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
	long long n,k;
	long long res;
	while(true){
		cin>>n>>k;
		if(n==0&&k==0){
			break;
		}
		res = ((power(n,k))%10000007)+((power(n,n))%10000007)+(2*(power(n-1,k))%10000007) + (2*(power(n-1,n-1))%10000007);
		cout<<res%10000007<<endl;
	}
	
	return 0;
}
 