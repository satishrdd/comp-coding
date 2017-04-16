#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int m[24][60]={0};

int main(int argc, char const *argv[])
{
	/* code */
	ios_base::sync_with_stdio(0);;cin.tie(0);
	int n,a,b;
	cin>>n;
	//vector<pair<int,int>> ve;
	int ma=0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		m[a][b]++;
		ma=  max(ma,m[a][b]);
	
	}

	//sort(ve.begin(),ve.end(),cmp);
	a=1;
	
	
	cout<<ma<<endl;
	return 0;
}