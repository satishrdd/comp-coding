#include<bits/stdc++.h>


typedef long long ll;


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	ll res=0;
	for(int i=1;i<=n;i++){
		res += (ll) pow(2,i);
	}
	cout<<res<<endl;
	return 0;
}