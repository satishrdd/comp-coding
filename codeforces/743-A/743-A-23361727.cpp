#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	long long n,a,b;
	string s;
	cin>>n>>a>>b>>s;
	cout<<((s[a-1]-'0')^(s[b-1]-'0'));
	//cout<<count<<endl;
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y