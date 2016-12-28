#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	string s;
	cin>>s;
	int l = s.length();
	int ar[l];
	int flag=0;
	int count=0,hc=0,r=0;
	for(int i=0;i<l;i++){
		if(s[i]=='('){
			count++;
		}else if(s[i]==')') {
			count--;
		}else{
			r=i;
			count--;
			hc++;
		}
		if(count<0){
			cout<<-1<<endl;
			return 0;
		}
		
	}

	int temp=0;
	for(int i=r+1;i<l;i++){
		if(s[i]=='('){
			temp++;
		}else{
			temp--;
		}
		if(temp<0){
			temp=0;
		}
	}
	if(temp>0){
		cout<<-1<<endl;
		return 0;
	}else{
		for(int i=0;i<hc-1;i++){
			cout<<1<<endl;
		}
		cout<<1+count<<endl;
	}

	

	
	
	return 0;
}