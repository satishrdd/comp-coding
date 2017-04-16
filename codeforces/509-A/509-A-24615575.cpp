#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 100000000



ll fact(int n){
	if(n<=1){
		return 1;
	}else{
		ll res=1;
		for(ll i=2;i<=n;i++){
			res  = res*i;
		}
		return res;
	}
}

ll C(ll n,ll k){
	return fact(n)/(fact(k)*fact(n-k));
}

int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    cout<<C(2*n-2,n-1)<<endl;
	return 0;
}