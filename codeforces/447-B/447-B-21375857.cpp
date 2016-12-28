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
	string s;
	cin>>s;
	cin>>k;
	long long ar[26];
	long long ma=-1;
	for(int i=0;i<26;i++){
		cin>>ar[i];
		ma = max(ar[i],ma);
	}

	long long res=0;
	for(long long  i=0;i<s.length();i++){
		res+=ar[s[i]-'a']*(i+1);
	}
	for(long long i=s.length();i<s.length()+k;i++){
		res+=ma*(i+1);
	}

	cout<<res<<endl;


	return 0;
}