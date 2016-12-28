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
	long long n,m,k,count=0,l=0;
	cin>>n>>m>>k;
	long long ar[m];
	long long t;
	for(long long i=0;i<m;i++){
		cin>>ar[i];
	}
	cin>>t;
	for(long long i=0;i<m;i++)
    {
        l=0;
        int u=ar[i]^t;
        while(u>0)
        {
            if(u%2!=0)
            {
                l++;
             
            }
            u=u/2;
        
        }
      
        if(l<=k)
        {
            count++;
        }
        
    }
	cout<<count<<endl;
	return 0;
}