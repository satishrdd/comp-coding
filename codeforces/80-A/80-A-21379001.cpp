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
	
	int primes[51]={0};
	for(int i=2;i<=8;i++){
		if(primes[i]==0){
			primes[i]=0;
			for(int j=2*i;j<=50;j+=i){
				primes[j]=-1;
			}
		}
	}

	int n,m;
	cin>>n>>m;
	for(int i=n+1;i<=50;i++){
		//cout<<i<<endl;
		if(primes[i]==0){
			if(i==m){
				cout<<"YES"<<endl;
				return 0;
			}else{
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	

cout<<"NO"<<endl;
	return 0;
}