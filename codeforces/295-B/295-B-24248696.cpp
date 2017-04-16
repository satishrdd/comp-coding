#include<bits/stdc++.h>


using namespace std;




int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	long long dp[n+1][n+1];
	//long long dp1[n+1][n+1];
	int added[n+1];
	long long res[n+1]={0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>dp[i][j];
			//dp1[i][j]=999999999999999;
		}
	}
	for(int i=1;i<=n;i++){
		cin>>added[i];
	}
	bool visited[n+1] = {false};
	for(int l=n;l>=1;l--){			//adding each node to the graph and finding paths 
		int temp=added[l];
		visited[temp]=true;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				dp[i][j] = min(dp[i][j],dp[i][temp]+dp[temp][j]);
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(visited[i]&&visited[j])
				res[l]+=dp[i][j];
			}
		}

	}
	for(int i=1;i<=n;i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
	return 0;
}