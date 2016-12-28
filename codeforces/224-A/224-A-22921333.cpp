#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	int a = 4*(sqrt(s1*s2/s3) +sqrt(s3*s2/s1) + sqrt(s3*s1/s2) );
	cout<<a<<endl;

	return 0;
}