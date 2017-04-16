#include<bits/stdc++.h>


typedef long long ll;


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	ll res=0,ma=0;
	ll n;
	cin>>n;
	ll ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		ma = max(ma,ar[i]);
	}
	for(int i=0;i<n;i++){
		res+=(ma-ar[i]);
	}
	cout<<res<<endl;
	return 0;
}