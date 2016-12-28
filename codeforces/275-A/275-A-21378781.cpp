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
	
	int ar[3][3],br[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>ar[i][j];
			br[i][j]=0;
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			br[i][j]+=ar[i][j];
			if(i>0)
			br[i][j]+=ar[i-1][j];
			if(i<2)
			br[i][j]+=ar[i+1][j];
			if(j>0)
			br[i][j]+=ar[i][j-1];
			if(j<2)
			br[i][j]+=ar[i][j+1];

		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(br[i][j]%2==0){
				cout<<1;
			}else{
				cout<<0;
			}
		}
		cout<<endl;
	}

	return 0;
}