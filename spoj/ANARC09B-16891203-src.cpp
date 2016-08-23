#include<iostream>
#include<stdio.h>

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
	long long l,h;
	while(true){
		cin>>l>>h;
		if(l==0&&h==0){
			break;
		}else{
			long long val = gcd(l,h);
			long long a = l/val;
			long long b = h/val;
			cout<<a*b/gcd(a,b)<<endl;
		}
	}
	return 0;
}