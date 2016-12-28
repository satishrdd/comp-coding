#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long k,n,w;
	cin>>k>>n>>w;
	long long res = (w)*(w+1)/2;
	res =res*k;

	cout<<max(0LL,res-n)<<endl;
	return 0;
}