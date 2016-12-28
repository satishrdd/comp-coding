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
	int n;
	cin>>n;
	for(int i=n+1;i<=9012;i++){
		if(possible(i)){
			cout<<i<<endl;
			return 0;
		}
	}

	return 0;
}