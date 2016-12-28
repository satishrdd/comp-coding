#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	long long n,a,b;
	long long mi = 9999999999,ma = -2;
	cin>>n;
	vector<pair<int,int>> ve;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		ve.push_back({a,b});
		mi  = min(mi,a);
		ma = max(b,ma);
	}
	for(int i=0;i<n;i++){
		if(ve[i].first==mi && ve[i].second==ma){
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;

	return 0;
}