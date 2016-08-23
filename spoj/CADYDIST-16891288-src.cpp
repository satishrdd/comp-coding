#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;


long long gcd(long long a,long long b){
	while(b!=0){
		long long t= b;
		b = a%b;
		a =t;
	}
	return a;
}

int main(int argc, char const *argv[])
{
	/* code */
	long long n;
	while(true){
		cin>>n;
		if(n==0){
			break;
		}else{
			long long c[n],p[n];
			for(long long i=0;i<n;i++){
				cin>>c[i];
			}
			for(long long i=0;i<n;i++){
				cin>>p[i];
			}
			sort(c,c+n);
			sort(p,p+n);
			long long res =0;
			for(long long i=0;i<n;i++){
				res = res + c[i]*p[n-i-1];
			}
			cout<<res<<endl;
		}
	}
	return 0;
}