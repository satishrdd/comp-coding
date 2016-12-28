#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n,temp;
	cin>>n;
	long long res =0;
	res += n/5;
	temp = n%5;
	n = temp;
	res += n/4;
	temp = n%4;
	n = temp;
	res += n/3;
	temp = n%3;
	n =temp;
	res += n/2;
	temp = n%2;
	n =temp;
	res += n/1;
	temp = n%1;
	cout<<res<<endl;
	

	
	
	return 0;
}