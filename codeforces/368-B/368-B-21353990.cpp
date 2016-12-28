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
	int n,m,temp;
	cin>>n>>m;
	set<int> s;
	int dp[n],ar[n];

	for(int i=0;i<n;i++){
		cin>>ar[i];
		
		
//		cout<<dp[i]<<endl;
	}

	for(int i=n-1;i>=0;i--){
		s.insert(ar[i]);
		dp[i] = s.size();
	}



	while(m--){
		cin>>temp;
		cout<<dp[temp-1]<<endl;
	}

	return 0;
}