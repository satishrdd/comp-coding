#include<bits/stdc++.h>


using namespace std;


#define ll int
#define ma1  300005

ll n,m;
long long dp[ma1];
int best_neighbour[ma1];
ll w[ma1];
vector<pair<ll,ll>> ve[ma1];
vector< pair<ll, ll> >::iterator its;

int main(int argc, char const *argv[])
{
	/* code */

	ll x,y,weight;
	cin>>n>>m;
	
	//memset(w,0,sizeof(w));
	for(int i=1;i<=n;i++){
		w[i]=0;
	}
	for(int i=1;i<=m;i++){
		cin>>x>>y>>weight;
		ve[x].push_back({y,i});
		ve[y].push_back({x,i});
		w[i]=weight;
	}
	for(int i=1;i<=n;i++){
		dp[i] = -1;
		best_neighbour[i] = -1;
	}


	ll u;
	cin>>u;


	queue<ll> q;
	q.push(u);
	
	//memset(best_neighbour,-1,sizeof(best_neighbour));
	//memset(dp,-1,sizeof(dp));
	dp[u]=0;
	while(!(q.empty())){
		ll temp = q.front();
		q.pop();
		for(its = ve[temp].begin();its!=ve[temp].end();its++){
			ll v = its->first;
			if(dp[v]==-1){
				dp[v] = dp[temp] + w[its->second];
				q.push(v);
			}else{
				if(dp[v]>dp[temp]+w[its->second]){
					dp[v] = dp[temp]+w[its->second];
					q.push(v);
				}
			}
		}
	}

	//found shortest point from u to any node in graph

	//now greedily search for best neighbour
	queue<int> newq;

	best_neighbour[u]=0;
	newq.push(u);
	while(!(newq.empty())){
		ll temp = newq.front();
		newq.pop();
		for(its=ve[temp].begin();its!=ve[temp].end();its++){
			ll v = its->first;
			ll weight = w[its->second];
			if((w[best_neighbour[v]]>weight && dp[v]==dp[temp]+weight)||((best_neighbour[v]==-1 && dp[v]==dp[temp]+weight))){
				newq.push(v);
				best_neighbour[v] = its->second;
			}
		}
	}
	long long mincost=0;
	for(int i=1;i<=n;i++){
		mincost+= w[best_neighbour[i]];
		//cout<<w[best_neighbour[i]]<<endl;
	}
	cout<<mincost<<endl;
	for(int i=1;i<=n;i++){
		if(i!=u){
			cout<<best_neighbour[i]<<" ";
		}
	}
	cout<<endl;


	return 0;
}