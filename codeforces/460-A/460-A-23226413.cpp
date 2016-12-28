#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n,m;
	long long sum=0,temp=0;
	cin>>n>>m;
	int rem=0;

	while(n){
		n--;
		temp++;
		rem++;
		if(rem==m){
			n++;
			rem=0;
		}
	}
	cout<<temp<<endl;
	
	
	
	return 0;
}