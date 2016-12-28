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


int main()
{
	/* code */
	int n,m,ma,pos;
	cin>>n>>m;
	int temp;
	cin>>temp;
	pos=1;
	ma=ceil(temp,m);
	for(int i=2;i<=n;i++){
		cin>>temp;
		if(ceil(temp,m)>=ma){
			ma=ceil(temp,m);
			pos=i;
		}
	}
	cout<<pos<<endl;

	return 0;
}