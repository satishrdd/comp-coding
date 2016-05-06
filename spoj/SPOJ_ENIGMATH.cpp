#include<iostream>
 
 
 
using namespace std;
 
 
 
long long gcd(long long a,long long b){
	while(b!=0){
		long long t = b;
		b = a%b;
		a = t;
	}
	return a;
}
 
 
int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	cin>>cases;
	long long a,b,x,y;
	while(cases--){
		cin>>a>>b;
		cout<<b/gcd(a,b)<<" "<<a/gcd(a,b)<<endl;
	}
	return 0;
}