#include<bits/stdc++.h>


using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
	/* code */
	ll n,m;
	cin>>n>>m;
	if(abs(n-m)<=1&&n+m!=0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}