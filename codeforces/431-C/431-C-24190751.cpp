#include<bits/stdc++.h>


typedef long long ll;


using namespace std;

#define MOD 1000000007



ll dp[101][2];

int main(int argc, char const *argv[])
{
	/* code */
	ll n,k,d;
	cin>>n>>k>>d;
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	dp[0][1]=0;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=min(k,i);j++){
			if(j<d){
				dp[i][0] += dp[i-j][0];
				dp[i][1] +=dp[i-j][1];
			}else{
				dp[i][1] += dp[i-j][0];
				dp[i][1] +=dp[i-j][1];
			}
			dp[i][0] %= MOD;
			dp[i][1] %= MOD;
		}
	}
	cout<<dp[n][1]%MOD<<endl;

	return 0;
}