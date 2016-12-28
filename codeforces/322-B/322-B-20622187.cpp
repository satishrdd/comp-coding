#include<bits/stdc++.h>


using namespace std;

signed main()
{
  /* code */
 long a,c,b;
 long ans=0;
 cin>>a>>b>>c;
	ans=a/3 +b/3 +c/3;
	
	
	if(a>=1 && b>=1 && c>=1) ans= max(ans,1 + (a-1)/3 + (b-1)/3 + (c-1)/3);
	if(a>=2 && b>=2 && c>=2) ans=max(ans,2+ (a-2)/3 + (b-2)/3 + (c-2)/3);
	

 
 cout<<ans<<endl;
  return 0;
}