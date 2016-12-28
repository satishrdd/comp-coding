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
	map<string,bool> ma;
	map<string,int> ma1;
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		if(ma[s]==false){
			cout<<"OK"<<endl;
			ma[s]=true;
			ma1[s]++;
		}else{
			
				string c = to_string(ma1[s]);
				//s +c;
				cout<<s+c<<endl;
				ma1[s]++;
				
			
		}
	}


	return 0;
}