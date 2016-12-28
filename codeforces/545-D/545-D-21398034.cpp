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

#define ll long long

int main()
{
	/* code */
	int n;
	cin>>n;
	long long ar[n];
	for(int  i=0;i<n;i++){
		cin>>ar[i];
	}
	sort(ar,ar+n);
	long long tim=0,count=0;
	for(int i=0;i<n;i++){
		if(ar[i]>=tim){
			tim+=ar[i];
			count++;
		}
	}
	cout<<count<<endl;

	return 0;
}