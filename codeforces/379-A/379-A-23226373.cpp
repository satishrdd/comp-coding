#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n,m;
	long long sum=0,temp=0,rem=0;
	cin>>n>>m;
	while(n){
		n--;
		sum+=1;
		rem+=1;
		if(rem>=m){
			rem -=m;
			n++;
		}
	}
	cout<<sum<<endl;
	
	
	return 0;
}