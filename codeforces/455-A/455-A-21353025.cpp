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



#define mod 1000000007
int main()
{
	/* code */
	long long n;
	cin>>n;
	long long m = 100000;
	long long ar[m+1]={0};
	int temp;
	long long dp[m+1];
	for(int i=0;i<=m;i++){
		ar[i]=0;
		dp[i]=0;
	}
	for(int i=0;i<n;i++){
		cin>>temp;
		ar[temp]++;
	}

	
	dp[0] =0;
	dp[1] = ar[1];

	for(long long i=2;i<=m;i++){
		dp[i] = max(dp[i-1],dp[i-2] + i*(ar[i]));

	}
	cout<<dp[m]<<endl;
	return 0;
}