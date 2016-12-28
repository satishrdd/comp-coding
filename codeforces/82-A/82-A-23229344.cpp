#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long n;
	string ar[5] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
	cin>>n;
	long long temp=5;
	int i=1;
	long long las=1;
	while(n-temp>0){
		las = temp;
		i = i*2;
		
		temp = temp + 5*i;
		
	}
	//cout<<las<<endl;
	las = n-las;
	//cout<<i<<" "<<temp<<endl;
	//cout<<las<<endl;
	cout<<ar[las/(i)]<<endl;
	

	
	
	return 0;
}