#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 1000000007

vector<pair<int,int>> ve[100001];
int n,m;
int vis[100001];
int par[100001];
vector<int> path;
ll dis[100001];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater <pair<int,int>>> q;

int djikstra(){
	dis[1]=0;
	par[1]=0;
	q.push({0,1});
	while(!q.empty()){
		int node = q.top().second;
		q.pop();
		if(vis[node]==0){
			vis[node]=1;
			for(int i=0;i<ve[node].size();i++){
				int cst2 = ve[node][i].first,node2 = ve[node][i].second;
				if(dis[node]+cst2 < dis[node2]){
					dis[node2]=dis[node]+cst2;
					par[node2] = node;
					q.push({dis[node2],node2});
				}
			}
		}
	}

	if(dis[n]==100000000000001){
		cout<<-1<<endl;
		return 0;
	}else{
		path.push_back(n);
		int i =n;
		while(par[i]!=0){
			path.push_back(par[i]);
			i = par[i];
		}

		for(int j=path.size()-1;j>=0;j--){
			cout<<path[j]<<" ";
		}
		cout<<endl;
	}

}



int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    int x,y,w;
    for(int i=0;i<m;i++){
    	cin>>x>>y>>w;
    	ve[x].push_back({w,y});
    	ve[y].push_back({w,x});
    }

    for(int i=1;i<=n;i++){
    	dis[i]=100000000000001;
    	par[i]=-1;
    }
    djikstra();
    
	return 0;
}