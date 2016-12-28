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
	
	int n,l1=0,r1=0,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a==1){
			l1++;
		}
		if(b==1){
			r1++;
		}
	}
	long long res = min(l1,n-l1)+min(r1,n-r1);
	cout<<res<<endl;

	return 0;
}