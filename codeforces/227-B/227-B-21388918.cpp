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

bool possible(int n){
	int ar[10]={0};
	int k=1000;
	for(int i=0;i<4;i++){
		ar[n/k]++;
		if(ar[n/k]>1){
			return false;
		}
		n= n%k;
		k = k/10;

	}
	return true;

}


int main()
{
	/* code */
	
	long long n,m,counta=0,countb=0;
	cin>>n;
	map<long long,long long> fpos;
	map<long long,long long> rpos;
	long long ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		fpos[ar[i]] = i+1;
		rpos[ar[i]] = n-i;
	}
	long long temp;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>temp;
		counta += fpos[temp];
		countb+=rpos[temp];
	}
	cout<<counta<<" "<<countb<<endl;
	return 0;
}