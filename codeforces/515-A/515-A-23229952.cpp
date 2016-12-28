#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long a,b,s;
	cin>>a>>b>>s;
	a = abs(a);
	b = abs(b);
	if(a+b>s){
		cout<<"No"<<endl;
	}else{
		if((s-a-b)%2==0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	
	
	return 0;
}