#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define MOD 1000000007

vector<int> ve[100005];
ll visited[100005];
ll coun[100005];
ll A[100005],B[100005],C[100005];




void dfs(int i,int label){
	if(visited[i]==0){
		visited[i]=label;
	}
	for(int j=0;j<ve[i].size();j++){
		if(visited[ve[i][j]]==0){
			dfs(ve[i][j],label);
		}
	}
	return;
}



int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	string a = "WB";
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<m;j++){
			if(s[j]=='.'){
				cout<<a[(i+j)%2];
			}else{
				cout<<s[j];
			}
		}
		cout<<endl;
	}
	return 0;
}