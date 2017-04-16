#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 1000000007


int visited[200001];


int n,m,k;
int color[200001];
vector<int> ve[200001];
vector<int> temp;
map<int,int> color_count;
int cnt=0;
void dfs(int i){
	visited[i]=1;
	temp.push_back(i);
	color_count[color[i]]++;
	cnt = max(cnt,color_count[color[i]]);
	for(int j=0;j<ve[i].size();j++){
		if(visited[ve[i][j]]==0){
			dfs(ve[i][j]);
		}
	}
}



int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(visited,0,sizeof(visited));
    memset(color,0,sizeof(color));
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
    	cin>>color[i];
    }
    int x,y;
    for(int i=0;i<m;i++){
    	cin>>x>>y;
    	ve[x].push_back(y);
    	ve[y].push_back(x);
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
    	if(visited[i]==0){
    		temp.clear();
    		cnt=0;
    		color_count.clear();
    		dfs(i);
    		ans+=temp.size()-cnt;
    	}
    }
    cout<<ans<<endl;
	return 0;
}