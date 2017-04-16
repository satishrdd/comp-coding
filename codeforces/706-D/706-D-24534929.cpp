#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll q;
	cin>>q;
	char c;
	ll n;
	map<ll,ll> ma;
	ma[0]=1;
	while(q--){
		ll res=0;
		cin>>c>>n;
		if(c=='+'){
			ma[n]++;
		}else if(c=='-'){
			ma[n]--;
			if(ma[n]<=0){
				ma.erase(n);
			}
		}else{
			ll res=0;
			for(int i=30;i>=0;i--){
				ll currbit = 1LL<<i;
				ll mask = currbit-1;
				ll temp= res;
				if(!(n&currbit)){
					temp = temp |currbit;
				}
				map<ll, ll>::const_iterator it = ma.lower_bound(temp);
				if (it != ma.end() && (it->first & ~mask) == temp)
					res = temp;
				else
					res =temp ^ currbit;
			}
			cout<<(res^n)<<endl;
		}
	}

	return 0;
}