#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	
	string s;
	cin>>s;
	long long rem=0;
	reverse(s.begin(),s.end());
	if(s.length()==1){
		rem = (s[0]-'0')%4;
	}else{
		rem = ((s[1]-'0')*10 + (s[0]-'0'));
	//	cout<<rem<<endl;
		rem = rem%4;
	}
	//cout<<rem<<endl;
	if(s=="0"){
		cout<<4<<endl;
	}else{
		cout<<(long long)(pow(1,rem)+pow(2,rem)+pow(3,rem)+pow(4,rem))%5;
	}
	return 0;
}

//8 4 2 6 8