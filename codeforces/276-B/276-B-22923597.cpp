#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	string s;
	cin>>s;
	int ar[26]={0};
	for(int i=0;i<s.length();i++){
		ar[s[i]-'a']++;
	}
	int odd=0;
	for(int i=0;i<26;i++){
		if(ar[i]%2!=0){
			odd++;
		}
	}

	if(odd==0){
		cout<<"First"<<endl;
	}else{
		if(odd%2==0){
			cout<<"Second"<<endl;
		}else{
			cout<<"First"<<endl;
		}
	}
	return 0;
}