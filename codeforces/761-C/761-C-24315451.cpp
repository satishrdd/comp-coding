#include<bits/stdc++.h>


using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	/* code */
	int n,m;
	cin>>n>>m;
	string s;
	vector<pair<int,pair<int,int>>> ve;
	for(int i=0;i<n;i++){
		cin>>s;
		int temp=99999999,temp1=99999999,temp2=9999999;
		for(int j=0;j<m;j++){
			if(s[j]=='*'||s[j]=='&'||s[j]=='#'){
				temp=min(temp,min(j,m-j));
			}else if(s[j]>='0'&&s[j]<='9'){
				temp1 = min(temp1,min(j,m-j));
			}else{
				temp2 = min(temp2,min(j,m-j));
			}
		}
		ve.push_back({temp,{temp1,temp2}});
	}

	int best=9999999;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				best = min(best,ve[i].first+ve[j].second.first+ve[k].second.second);
				best = min(best,ve[j].first+ve[i].second.first+ve[k].second.second);
				best = min(best,ve[i].first+ve[k].second.first+ve[j].second.second);
				best = min(best,ve[j].first+ve[k].second.first+ve[i].second.second);
				best = min(best,ve[k].first+ve[i].second.first+ve[j].second.second);
				best = min(best,ve[k].first+ve[j].second.first+ve[i].second.second);
			}
		}
	}
	cout<<best<<endl;
	return 0;
}