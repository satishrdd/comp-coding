#include<iostream>
#include<vector>
#include<cstring>
#define mod 1000003
using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	
	long long a[1001];
	a[1]=1;
	a[0]=1;
	for(int i=2;i<=1000;i++){
		a[i] = 3*a[i-1];
		a[i] = a[i]%mod;
	}

	long n;
	cin>>n;
	cout<<a[n]<<endl;


	return 0;
}