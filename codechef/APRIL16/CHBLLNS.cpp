#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<cmath>
 
using namespace std;
 
 
 
 
 
int main(int argc, char const *argv[])
{
	/* code */
	
	int cases;
	cin>>cases;
	while(cases--){
		long long R,G,B,k,ans=1;
		cin>>R>>G>>B>>k;
		long long min1,min2,min3;
		min1= min(R,min(G,B));
		if(min1==R){
			min2 = min(G,B);
			min3 = max(G,B);
		}else if(min1 ==G){
			min2 = min(R,B);
			min3 = max(R,B);
		}else{
			min2 = min(R,G);
			min3 = max(R,G);
		}
		if(k==1){
			cout<<1<<endl;
		}else{
			if(k<=min1){
				ans = ans + 3*(k-1);
				cout<<ans<<endl;
			}else if(k>min1&&k<=min2){
				ans = ans + 3*min1+ (k-min1-1)*2;
				cout<<ans<<endl;
			}else{
				ans = ans + min1*3 + (min2-min1)*2 + (k-min2-1);
				cout<<ans<<endl;
			}
		}
		
	}
	
	return 0;
}
