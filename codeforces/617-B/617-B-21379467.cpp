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
	
	vector<int> pos;

	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp==1){
			pos.push_back(i);
		}
	}

	if(pos.size()==0){
		cout<<0<<endl;
	}else if(pos.size()==1){
		cout<<1<<endl;
	}else{
		long long res=pos[1]-pos[0];
		for(int i=2;i<pos.size();i++){
			res*=(pos[i]-pos[i-1]);
		}
		cout<<res<<endl;
	}
	return 0;
}