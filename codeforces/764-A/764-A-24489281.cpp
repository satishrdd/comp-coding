#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int m,n,z;
	cin>>n>>m>>z;
	int res = n*m/__gcd(n,m);
	int count=0;
	for(int i=res;i<=z;i=i+res){
		count++;
	}
	cout<<count<<endl;
	return 0;
}