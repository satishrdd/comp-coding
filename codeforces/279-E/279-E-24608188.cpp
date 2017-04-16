#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 1000000007





int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int n = s.length();
    int last = n-1;
    int dp[n][2];
    for(int i=n-1;i>=0;i--){
    	if(s[i]=='1'){
    		last=i;
    		break;
    	}
    }
    dp[last][0]=1;
    dp[last][1]=1;
    for(int i=last-1;i>=0;i--){
    	if(s[i]=='1'){
    		dp[i][0] = min(dp[i+1][0],dp[i+1][1])+1;
    		dp[i][1] = dp[i+1][1];
    	}else{
    		dp[i][1] = min(dp[i+1][0],dp[i+1][1])+1;
    		dp[i][0] = dp[i+1][0];
    	}

    }
    cout<<dp[0][0]<<endl;
	return 0;
}