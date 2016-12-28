/*****************************************************************************************/
/*																		     			 */
/*  					Satish Reddy Yerva										 			 */
/*																			 			 */
/*****************************************************************************************/
 
#include <bits/stdc++.h>

/* Data types and structures. */

 
using namespace std;

double a,b,c;
double k;


vector<long long> primes;



#define mod 1000000007
int main()
{
	/* code */
	long long n;
	cin>>n;
	long long ans=1;
	long long temp = n;
	for(long long i=2;i*i<=n;i++){
		if(temp%i==0){
			ans = ans*i;
			while(temp%i==0){
				temp/=i;
			}
		}
	}
	if(temp>1){
		ans*=temp;
	}
	cout<<ans<<endl;

	return 0;
}