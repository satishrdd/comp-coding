#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
 
int main(){
	int cases,ar[3],h=0;
	cin >> cases;
	while(cases--){
		cin>>ar[0]>>ar[1]>>ar[2];
		long ans=ar[0]/3+ar[1]/3+ar[2]/3;
		if(ar[0]>=3)h=1;
		ar[0]=ar[0]%3;
		ar[1]=ar[1]%3;
		ar[2]=ar[2]%3;
		sort(ar,ar+3);
		if(ar[0]==0 && ar[1]==2 && ar[2]==2 && h==1)
			ans+=1;
		else if (ar[0]>1 && ar[1]>1 && ar[2]>1)
			ans+=2;
		else if(ar[1]>0 && ar[0] >0 && ar[2]>0)
			ans+=1;
        cout << ans<<"\n";
        h=0;
	}
} 
