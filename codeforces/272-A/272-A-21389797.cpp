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
	
	int n,ans,temp;
	long sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		sum+=temp;
	}
	if(n==1){
		if(sum%2==0){
			ans=2;
		}else{
			ans=3;
		}
	}else if(n==2){
		if(sum%3==0){
			ans=4;
		}else{
			ans=3;
		}
	}else if(n==3){
		if(sum%4==0){
			ans=3;
		}else{
			ans=4;
		}
	}else if(n==4){
		ans=4;
	}else{
		if(sum%(n+1)==0){
			ans=5;
		}else if((sum+1)%(n+1)==1){
			ans=4;
		}else if((sum+2)%(n+1)==1){
			ans=4;
		}else if((sum+3)%(n+1)==1){
			ans=4;
		}else if((sum+4)%(n+1)==1){
			ans=4;
		}else if((sum+5)%(n+1)==1){
			ans=4;
		}else{
			ans=5;
		}
	}
	cout<<ans<<endl;
	return 0;
}