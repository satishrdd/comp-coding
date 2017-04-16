#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 100000000





int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;
    int dp[205][205][2];
    memset(dp,0,sizeof(dp));
    dp[0][0][0]=1;
    dp[0][0][1]=1;
    for(int i=0;i<=n1;i++){
    	for(int j=0;j<=n2;j++){
    		for(int k=1;k<=k1;k++){
    			dp[i+k][j][0] = (dp[i+k][j][0] + dp[i][j][1])%MOD;
    		}
    		for(int k=1;k<=k2;k++){
    			dp[i][j+k][1] = (dp[i][j+k][1] + dp[i][j][0])%MOD;
    		}
    	}
    }
    cout<<(dp[n1][n2][0] + dp[n1][n2][1])%MOD<<endl;
	return 0;
}