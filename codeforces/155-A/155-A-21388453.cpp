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
	
	int n,l1=0,r1=0,ma,mi;
	cin>>n;
	cin>>l1;
	ma=l1,mi=l1;
	for(int i=1;i<n;i++){
		cin>>l1;
		if(l1>ma){
			r1++;
			ma = l1;
		}
		if(l1<mi){
			r1++;
			mi = l1;
		}
	}
	cout<<r1<<endl;

	return 0;
}