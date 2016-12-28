#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int re=0,ans=0,tot=0;



void rec(string s,int res){
	if(s.length()==0){
		if(re==res){
			ans++;

		}
		tot++;
		return;
	}else{
		int len = s.length();
		if(s[0]=='+'){
			rec(s.substr(1,len-1),res+1);
		}else if(s[0]=='-'){
			rec(s.substr(1,len-1),res-1);
		}else{
			rec(s.substr(1,len-1),res+1);
			rec(s.substr(1,len-1),res-1);
		}
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	long long n,m;
	cin>>n;
	cout<<(n-2)*(n-2)<<endl;
	return 0;
}

//8 4 2 6 8