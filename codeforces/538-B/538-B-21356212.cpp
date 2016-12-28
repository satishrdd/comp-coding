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
	string s;
	int n;
	cin>>s;
	int ma =0;
	for(int i=0;i<s.length();i++){
		ma = max(ma,s[i]-'0');
	}
	string res[ma];
	for(int i=0;i<ma;i++){
		res[i] = string(s.length(),'0');
		//cout<<res[i]<<endl;
	}

	for(int i=0;i<s.length();i++){
		int k = s[i]-'0';
		for(int j=0;j<k;j++){
			res[j][i]='1';
		}
	}
	cout<<ma<<endl;
	for(int i=0;i<ma;i++){
		if(res[i][0]=='0'){
			int j=1;
			while(res[i][j]!='1'){
				j++;
			}
			
			res[i] = res[i].substr(j,s.length()-j);
		}
		cout<<res[i]<<" ";
	}
	cout<<endl;

	return 0;
}