#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<cmath>
 
using namespace std;
 
 
 
 
int main(int argc, char const *argv[])
{
	/* code */
	long long cases,n,m;
	cin>>cases;
	while(cases--){
		cin>>n>>m;
			if(m==1&&n>2){
				cout<<"No\n";
			}else if(n==1&&m>2){
				cout<<"No\n";
			}
			else if(m%2==0||n%2==0){
				cout<<"Yes\n";
			}else{
				cout<<"No\n";
			}
		
	}
	return 0;
}
 
