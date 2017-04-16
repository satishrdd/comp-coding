#include<bits/stdc++.h>


typedef long long ll;


using namespace std;

ll dp[280000][20],sat[20],extra[20][20];





int main(int argc, char const *argv[])
{
	/* code */
	ll n,m,k,temp,temp1,temp2;
	ll ans=0;
	ll tempmax=0;
	cin>>n>>m>>k;
	memset(dp,0,sizeof(dp));
	memset(sat,0,sizeof(sat));
	memset(extra,0,sizeof(extra));

	for(ll i=0;i<n;i++){
		cin>>sat[i];
		dp[1<<i][i] = sat[i];
		tempmax = max(tempmax,sat[i]);
	}

	for(long long i=0;i<k;i++){
		cin>>temp>>temp1>>temp2;
		extra[temp-1][temp1-1] = temp2;
	}

	if(m==1){
		cout<<tempmax<<endl;
		return 0;
	}else{
		for(ll mask=1;mask<=((1<<n)-1);mask++){
			if(__builtin_popcountll(mask)<m){
				for(ll i=0;i<n;i++){
					if(mask &(1<<i)){
						for(ll j=0;j<n;j++){
							if((mask&(1<<j))==0){
								dp[mask|(1<<j)][j] = max(dp[mask|(1<<j)][j],dp[mask][i]+sat[j]+extra[i][j]);
								tempmax = max(tempmax,dp[mask|(1<<j)][j]);
							}
						}
					}
				}
			}
		}
	}


	cout<<tempmax<<endl;


	return 0;
}