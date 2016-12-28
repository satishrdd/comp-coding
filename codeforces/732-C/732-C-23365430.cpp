#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	long long b,d,m,s,res=0;
	cin>>b>>d>>s;
	m = max(b,max(d,s));
	//cout<<m<<endl;
	if((m-b) > 0){
		res = res +  m-b-1;
	}
	//cout<<res<<endl;
	if((m-d) > 0){
		res = res+ m-d-1;	
	}
	//cout<<res<<endl;
	if((m-s) >0){
		res = res+ m-s-1;
	}
	cout<<res<<endl;
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y