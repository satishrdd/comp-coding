#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n;
	cin>>n;
	long long ar[n],ma=-1,mb=9999;
	for(int i=0;i<n;i++){
		cin>>ar[i];
		if(i>0){
			ma =max(ma,ar[i]-ar[i-1]);
		}
	}
	for(int i=2;i<n;i++){
		mb =min(mb,ar[i]-ar[i-2]);
	}
	cout<<max(ma,mb)<<endl;
	return 0;
}

//8 4 2 6 8