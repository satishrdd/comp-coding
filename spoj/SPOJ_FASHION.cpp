#include <iostream>
#include<cstring>
#include<string.h>
#include<cmath>
#include<algorithm>
using namespace std;
 
main()
{
	/* code */
	
 
 
	int a,cases,i,ans=0;
	cin>>cases;
	long long b;
	while(cases--){
		cin>>a;
		int arrm[a],arrf[a];
		for(i=0;i<a;i++){
			cin>>arrm[i];
		}
		for (i = 0; i < a; ++i)
		{
			/* code */
			cin>>arrf[i];
		}
		sort(arrm,arrm+a);
		sort(arrf,arrf+a);
 
		for (i = 0; i < a; ++i)
		{
			/* code */
			ans = ans+arrf[i]*arrm[i];
		}
 
		cout<<ans<<endl;
		ans=0;
	}
 
 
	
 
}