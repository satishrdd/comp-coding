#include<bits/stdc++.h>


using namespace std;
typedef long long ll;

int visited[3001]={0};
vector<int> cycle;
stack<int> f,temp;
bool flag;
vector<int> ve[3001];

void dfs(int i,int parent){
	visited[i]=1;
	f.push(i);
	for(int j=0;j<ve[i].size();j++){
		if(flag){
			return;
		}
		
		if(visited[ve[i][j]]==1 && ve[i][j]!=parent)
			{
			temp=f;
			while(!temp.empty() && temp.top()!=ve[i][j]){
				int k = temp.top();
				cycle.push_back(k);
				temp.pop();
			}
			if(!temp.empty()){
				cycle.push_back(temp.top());
			}
			flag=true;
			return;
		}
		if(visited[ve[i][j]]==0){
			dfs(ve[i][j],i);
		}
	}
	f.pop();
}


int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n;
	cin>>n;
	ll x,y;
	
	ll res[n+1];
	for(int i=0;i<n;i++){
		cin>>x>>y;
		ve[x].push_back(y);
		ve[y].push_back(x);
		res[x]=2000000000;
		res[y] = 2000000000;
	}
	
	dfs(1,-1);
	memset(visited,0,sizeof(visited));
	queue<int> q;
	for(int i=0;i<cycle.size();i++){
		//cout<<cycle[i]<<" ";
		visited[cycle[i]]=1;
		res[cycle[i]]=0;
		q.push(cycle[i]);
	}
	
	while(!q.empty()){
		int u = q.front();
		int cost = res[u];
		q.pop();
		for(int i=0;i<ve[u].size();i++){
			int v = ve[u][i];
			if(visited[v]==0){
				visited[u]=1;
				res[v] = cost+1;
				q.push(v);
			}
		}
	}
		


	for(int i=1;i<=n;i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;


	return 0;
}