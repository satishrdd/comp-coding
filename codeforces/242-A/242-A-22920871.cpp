#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	vector<pair<int,int>> ve;
	int x,y,a,b,count=0;
	cin>>x>>y>>a>>b;
	for(int i=a;i<=x;i++){
		for(int j=b;j<=y;j++){
			if(i>j){

				ve.push_back({i,j});
				count++;
			}
		}
	}
	cout<<count<<endl;
	for(int i=0;i<ve.size();i++){
		cout<<ve[i].first<<" "<<ve[i].second<<endl;
	}
	return 0;
}