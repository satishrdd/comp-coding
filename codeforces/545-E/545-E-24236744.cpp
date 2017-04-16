#include<bits/stdc++.h>

#define ma 300005


using namespace std;


long long dp[ma];
int w[ma];
int best_neighbours[ma];

vector<pair<int,int>> ve[ma];
vector<pair<int,int>> ::iterator its;


int main(int argc, char const *argv[])
{
	/* code */

	int n,m,x,y,weight,u;
	cin>>n>>m;
	w[0]=0;
	for(int i=0;i<=n;i++){
		dp[i]=-1;
		best_neighbours[i]=-1;
	}
	for(int i=1;i<=m;i++){
		cin>>x>>y>>weight;
		ve[x].push_back({y,i});
		ve[y].push_back({x,i});
		w[i]=weight;
	}
	cin>>u;
	dp[u]=0;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int temp=q.front();
		q.pop();
		for(its=ve[temp].begin();its!=ve[temp].end();its++){
			int v =its->first;
			if(dp[v]==-1){
				dp[v] = dp[temp]+ w[its->second];
				q.push(v);
			}else{
				if(dp[v]>dp[temp]+w[its->second]){
					dp[v] = dp[temp]+ w[its->second];
					q.push(v);
				}
			}
		}
	}
	//cout<<"Dsvsd";

	best_neighbours[u]=0;
	q.push(u);
	while(!q.empty()){
		int temp=q.front();
		q.pop();
		for(its=ve[temp].begin();its!=ve[temp].end();its++){
			int v =its->first;
			int weight = w[its->second]; 
			if((w[best_neighbours[v]]>weight && dp[v]==dp[temp]+weight)||(best_neighbours[v]==-1 && dp[v]==dp[temp]+weight))
			{
				q.push(v);
				best_neighbours[v]= its->second;
			}
		}	
	}

	long long mincost=0;
	for(int i=1;i<=n;i++){
		mincost+= w[best_neighbours[i]];
		//cout<<w[best_neighbour[i]]<<endl;
	}
	cout<<mincost<<endl;
	for(int i=1;i<=n;i++){
		if(i!=u){
			cout<<best_neighbours[i]<<" ";
		}
	}
	cout<<endl;


	return 0;
}