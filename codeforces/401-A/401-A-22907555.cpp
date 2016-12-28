#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int n,k;
	cin>>n>>k;
	int sum=0;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		sum+=temp;
	}
	sum = abs(sum);
	if(sum%k==0)
	cout<<sum/k<<endl;
	else{
		cout<<sum/k+1<<endl;
	}
	return 0;
}