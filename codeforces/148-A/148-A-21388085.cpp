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
	
	int ar[100001]={0};
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	for(int i=m;i<=d;i=i+m){
		ar[i]=1;
	}
	for(int i=k;i<=d;i=i+k){
		ar[i]=1;
	}
	for(int i=l;i<=d;i=i+l){
		ar[i]=1;
	}
	for(int i=n;i<=d;i=i+n){
		ar[i]=1;
	}

	int count=0;
	for(int i=1;i<=d;i++){
		if(ar[i]==1){
			count++;
		}
	}
	cout<<count<<endl;

	return 0;
}