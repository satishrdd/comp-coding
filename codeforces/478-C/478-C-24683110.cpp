#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(int argc, char const *argv[])
{
	ll ar[3];
	cin>>ar[0]>>ar[1]>>ar[2];
	sort(ar,ar+3);
	if(ar[2]>=2*(ar[0]+ar[1])){
		cout<<ar[0]+ar[1]<<endl;
	}else{
		cout<<(ar[0]+ar[1]+ar[2])/3<<endl;
	}
	return 0;
}