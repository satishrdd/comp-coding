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
	string s;
	cin>>s;
	int curr=0,val=0,sum=0;
	for(int i=0;i<s.length();i++){
		val = abs(s[i]-'a'-curr);
		sum+=min(val,26-val);
		curr = s[i]-'a';
	}
	cout<<sum<<endl;

	return 0;
}