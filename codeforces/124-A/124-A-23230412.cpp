#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n,a,b;
	cin>>n>>a>>b;

	cout<<min(n-a,b+1)<<endl;
	return 0;
}