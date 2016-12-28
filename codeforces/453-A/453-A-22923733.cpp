#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	double sum=0;
	double n,m;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		sum += (double)i*(pow((double)(i/m),n) - pow((double)((i-1)/m),n));
	}
	cout<<sum<<endl;
	return 0;
}