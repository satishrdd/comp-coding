#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n;
	cin>>n;
	long long sum=0;
	for(int i=0;i<n;i++){
		sum += n-i + (i)*(n-i-1);
	}
	cout<<sum<<endl;

	
	
	return 0;
}