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
	long long n;
	int a,b;
	cin>>a>>b;
	long long num,den=6;
	num = 6 - max(a,b) +1;
	if(num==0){
		cout<<"0/1"<<endl;
	}else if(num==6){
		cout<<"1/1"<<endl;
	}else{
		if(num==2){
			cout<<"1/3"<<endl;
		}else if(num==3){
			cout<<"1/2"<<endl;
		}else if(num==4){
			cout<<"2/3"<<endl;
		}else{
			cout<<num<<"/"<<den<<endl;
		}
	}


	return 0;
}