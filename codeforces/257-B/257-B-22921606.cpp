#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int n,m;
	cin>>n>>m;
	if(n<m){
		swap(n,m);
	}
	cout<<n-1<<" "<<m<<endl;

	return 0;
}