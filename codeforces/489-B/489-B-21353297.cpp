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
	int n,m,temp;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	sort(ar,ar+n);
	cin>>m;
	map<int,int> ma;
	for(int i=0;i<m;i++){
		cin>>temp;
		ma[temp]++;
	}
int count=0;
	for(int i=0;i<n;i++){
		if(ma[ar[i]-1]>0){
			count++;
			ma[ar[i]-1]--;
		}else if(ma[ar[i]]>0){
			count++;
			ma[ar[i]]--;
		}else if(ma[ar[i]+1]>0){
			count++;
			ma[ar[i]+1]--;
		}
	}

	
	cout<<count<<endl;
	return 0;
}