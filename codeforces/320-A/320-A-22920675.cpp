#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	string s;
	int flag=0;
	cin>>s;
	for(int i=0;i<s.length();){
		if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4'){
			i = i+3;
		}else if(s[i]=='1'&&s[i+1]=='4')
		{
			i=i+2;
		}else if(s[i]=='1'){
			i++;
		}else{
			flag=1;
			break;
		}
	}

	if(flag==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}