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
	int n;
	cin>>n;
	long long ar[n],ts3[n],sum=0,s[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		sum+=ar[i];
		if(i>0)
		s[i] =s[i-1]+ar[i];
		else{
			s[i]=ar[i];
		} 
	}
	long long count=0,res=0;
	if(sum%3==0){
		for(int i=0;i<n;i++){
			if(2*sum/3== s[i]){
				count++;
				ts3[i] = count;
			}else{
				if(i>0)
				ts3[i] = ts3[i-1];
				else{
					ts3[i]=0;
				}
			}
		}

		for(int i=0;i<n;i++){
			if(s[i]==sum/3){

				res = res + ts3[n-1]-ts3[i];
				if((ts3[n-1]-ts3[i]>0)&&(sum/3==2*sum/3)){
					res--;
				}
			}
		}
		cout<<res<<endl;
	}else{
		cout<<0<<endl;
		return 0;
	}

	return 0;
}