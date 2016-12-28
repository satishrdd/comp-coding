#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long a,b,n;
	long long sum=0,temp=0;
	cin>>a>>b>>n;
	int rem=0;

	while(n>=0){
		temp++;
		if(temp&1){
			n = n-__gcd(n,a);
		}else{
			n = n-__gcd(n,b);
		}
	}
	if(temp&1){
		cout<<1<<endl;
	}else{
		cout<<0<<endl;
	}
	
	
	
	return 0;
}