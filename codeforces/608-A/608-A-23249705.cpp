#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int re=0,ans=0,tot=0;






int main(int argc, char const *argv[])
{
	/* code */
	long long a,b,n,s;
	map<long long,long long > ma;
	cin>>n>>s;
	long long mat = s;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		mat = max(mat,a+b);
	}
	
	cout<<mat<<endl;
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y