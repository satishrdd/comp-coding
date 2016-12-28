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
	int n,ma,mat;
	cin>>n;
	int ar[n];
	cin>>ar[0];
	ma = 1;
	mat=1;
	for(int i=1;i<n;i++){
		cin>>ar[i];
		if(ar[i]>ar[i-1]){
			ma++;
		}else{
			ma =1;
		}

		mat = max(ma,mat);
	}
	cout<<mat<<endl;
	return 0;
}