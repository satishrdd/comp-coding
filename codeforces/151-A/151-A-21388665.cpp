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
	
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int drink = k*l;
	int limes = c*d;
	cout<<min((drink/nl)/n,min((limes)/n,(p/np)/n))<<endl;

	return 0;
}