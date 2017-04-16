#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 100000000





int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x;
    cin>>n>>x;
    ll count =0;
    for(int i=1;i<=n;i++){
    	if(x%i==0){
    		if(x/i<=n){
    			count++;
    		}
    	}
    }
    cout<<count<<endl;
	return 0;
}