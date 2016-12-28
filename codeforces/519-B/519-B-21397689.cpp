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

int ceil(int a,int b){
	if(a%b==0){
		return a/b;
	}else{
		return (a/b)+1;
	}
}

#define ll long long

int main()
{
	/* code */
	ll n;
	map<ll,ll> ma;
	map<ll,ll> ma1;
	cin>>n;
	ll ar[n],br[n],temp;
	for(int i=0;i<n;i++){
		cin>>ar[i];
		ma[ar[i]]++;
	}
	for(int i=0;i<n-1;i++){
		cin>>br[i];
		ma[br[i]]--;
		ma1[br[i]]++;
	}
	for(int i=0;i<n-2;i++){
		cin>>temp;
		ma1[temp]--;
	}

	for(int i=0;i<n;i++){
		if(ma[ar[i]]!=0){
			cout<<ar[i]<<endl;
			break;
		}
	}
	for(int i=0;i<n-1;i++){
		if(ma1[br[i]]!=0){
			cout<<br[i]<<endl;
			break;
		}
	}

	return 0;
}