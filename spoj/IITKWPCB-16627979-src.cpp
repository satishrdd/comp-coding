#include<iostream>
#include<algorithm>
#include<string.h>
#include<cmath>

using namespace std;


long long gcd(long long a,long long b){
	while(b!=0){
		long long t = b;
		b = a%b;
		a =t;
	}
	return a;
}



int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	long long n;
	cin>>cases;
	while(cases--){
	cin>>n;
	for(long long i = floor(n/2);i>0;i--){
		if(gcd(i,n)==1){
			cout<<i<<endl;
			break;
		}
	}
	}
	return 0;
}
