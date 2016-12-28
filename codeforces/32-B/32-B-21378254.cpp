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


vector<long long> primes;



#define mod 1000000007
int main()
{
	/* code */
	string s,res="";
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='.'){
			res+='0';
		}else if(s[i]=='-'){
			if(s[i+1]=='.'){
				res+='1';
			}else{
				res+='2';
			}
			i++;
		}
	}
	cout<<res<<endl;

	return 0;
}