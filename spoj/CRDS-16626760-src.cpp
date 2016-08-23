#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	cin>>cases;
	long long n;
	while(cases--){
		cin>>n;
		long long res = n*(n-1)/2 + n*(n+1);
		cout<<res%1000007<<endl;
	}
	
	return 0;
}
