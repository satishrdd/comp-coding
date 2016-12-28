#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n;
	cin>>n;
	string s = to_string(n);
	//cout<<s<<endl;
	int k = s.length();
	long long res = k*(n+1);
	for(int i=0;i<k;i++){
		res -= pow(10,i);
 	}
 	cout<<res<<endl;
	return 0;
}