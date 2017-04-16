#include<bits/stdc++.h>


typedef long long ll;


using namespace std;




int main(int argc, char const *argv[])
{
	/* code */
	
	ll n,temp,temp1;
	cin>>n;
	vector<pair<long long,long long>>ve;
	for(int i=0;i<n;i++){
		cin>>temp>>temp1;
		ve.push_back({temp,temp1});
	}
	sort(ve.begin(),ve.end());
	ll res=-1;
	for(int i=0;i<n;i++){
		if(res<=ve[i].second){
			res=ve[i].second;
		}else{
			res = ve[i].first;
		}
	}
	cout<<res<<endl;


	return 0;
}