#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n;
	cin>>n;
	int ar[4]  ={8,4,2,6};
	if(n==0){
		cout<<1<<endl;
	}else{
		cout<<ar[(n-1)%4]<<endl;
	}
	return 0;
}

//8 4 2 6 8