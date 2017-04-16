#include<bits/stdc++.h>


typedef long long ll;


using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	ll n;
	cin>>n;
	if(n==1){
		cout<<3<<endl;
	}else if(n==2){
		cout<<4<<endl;
	}else
	cout<<n-2<<endl;
	return 0;
}