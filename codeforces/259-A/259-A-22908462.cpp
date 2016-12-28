#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	int flag=0;
	string s;
	string A = "BWBWBWBW";
	string B = "WBWBWBWB";
	for(int i=0;i<8;i++){
		cin>>s;
		if(s==A||s==B){
			;
		}else{
			flag=1;
		}
	}

	if(flag==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}