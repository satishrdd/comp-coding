#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int re=0,ans=0,tot=0;






int main(int argc, char const *argv[])
{
	/* code */
	long long n,temp;
	cin>>n;
	cin>>temp;
	long long ans=temp;
	for(int i=1;i<n;i++){
		cin>>temp;
		ans = __gcd(ans,temp);
	}
	cout<<ans*n<<endl;
	return 0;
}

//8 4 2 6 8