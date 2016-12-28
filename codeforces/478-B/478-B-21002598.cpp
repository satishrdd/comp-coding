/*****************************************************************************************/
/*																		     			 */
/*  					Satish Reddy Yerva										 			 */
/*																			 			 */
/*****************************************************************************************/
 
#include <bits/stdc++.h>

/* Data types and structures. */

#define vi vector <long long>

 


/* constralong longs. */ 
#define max_size 100005
#define max_sieve_size 1000005
#define max_matrix_size 100
#define max_log 17
#define INF 1000000000000000000
#define MOD 1000000007
#define EPS 0.0000000001
#define GCD_EPS 0.0001
#define PI 3.14159265358979323846
#define mod(a) ((a)%MOD)
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

using namespace std;


unsigned long long countSetBits(unsigned long long n)
{
  unsigned long long count = 0;
  while(n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

int main()
{
	fast;
	long long n,m;
	cin>>n>>m;
	long long ma = (n-m+1)*(n-m)/2;
	long long rem = n%m;
	long long div = n/m;
	long long mi = rem*((div*(div+1))/2) + (m-rem)*((div*(div-1))/2);
	cout<<mi<<" "<<ma<<endl;
	return 0;
}