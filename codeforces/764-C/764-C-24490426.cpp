#include<bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,x,y;
	cin>>n;
	int color[n+1],temp[n+1],sum=0;
	vector<pair<int,int>> ve;
	for(int i=0;i<n-1;i++){
		cin>>x>>y;
		ve.push_back({x,y});
	}
	for(int i=1;i<=n;i++){
		cin>>color[i];
	}
	memset(temp,0,sizeof(temp));
	for(int i=1;i<n;i++){
		if(color[ve[i-1].first]!=color[ve[i-1].second]){
			sum++;
			temp[ve[i-1].first]++;
			temp[ve[i-1].second]++;
		}
	}
	if(sum==0){
		cout<<"YES"<<endl<<1<<endl;
	}else{
		for(int i=1;i<=n;i++){
			if(temp[i]==sum){
				cout<<"YES"<<endl<<i<<endl;
				return 0;
			}
		}
		cout<<"NO"<<endl;
	}
	return 0;
}