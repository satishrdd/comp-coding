#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n;
	cin>>n;
	if(n%2==0)
	cout<<((n/2)-1)/2<<endl;
	else{
		cout<<0<<endl;
	}
	return 0;
}

//8 4 2 6 8