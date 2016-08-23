#include<iostream>
 
#include<algorithm>
#include<cstring>
 
 
using namespace std;
 
 
int main(int argc, char const *argv[])
{
	/* code */
	int  cases;
	cin>>cases;
	long long n,k;
	while(cases--){
		cin>>n>>k;
		long long a[n],b[n],c[n];
		long long sum=0;
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
 
		for(long long i=0;i<n;i++){
			cin>>b[i];
			sum+=b[i]*a[i];
			c[i] = abs(b[i]);
		}
		sort(c,c+n);
		sum = sum + c[n-1]*k;
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
} 
