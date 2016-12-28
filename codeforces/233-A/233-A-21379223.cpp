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
	int ar[n];
	

	if(n%2==0){
		for(int i=0;i<n;i++){
			ar[i]=i+1;
		}
		for(int i=0;i<n;i++){
			swap(ar[i],ar[i+1]);
			i++;
		}
		for(int i=0;i<n;i++){
			cout<<ar[i]<<" ";
		}
		cout<<endl;
	}else{
		cout<<-1<<endl;
	}
	return 0;
}