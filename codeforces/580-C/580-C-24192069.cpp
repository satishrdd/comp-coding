#include<bits/stdc++.h>


typedef long long ll;


using namespace std;

#define MOD 1000000007



int ar[100001]={0};
int visited[100001]={0};
vector<int> ve[100001];
int n,m;
int c=0;

void dfs(int node,int ccount){
	//cout<<node<<" "<<ccount<<" "<<m<<" "<<ve[node].size()<<endl;
	if(ccount>m){
		return;
	}

	if(ccount<=m&&(ve[node].size()==1 && node!=1)){
		//cout<<"Dvdsf";
		c++;
		return;
	}
	for(int i=0;i<ve[node].size();i++){
		if(visited[ve[node][i]]==0){
			visited[ve[node][i]]=1;
			if(ar[ve[node][i]]==0){
				dfs(ve[node][i],0);
			}else{
				dfs(ve[node][i],ccount+1);
			}
		}
	}
	return;
}



int main(int argc, char const *argv[])
{
	/* code */
	int temp,temp1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<n-1;i++){
		cin>>temp>>temp1;
		ve[temp].push_back(temp1);
		ve[temp1].push_back(temp);
	}
	visited[1]=1;
	dfs(1,ar[1]);
	cout<<c<<endl;
	return 0;
}