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
	cin>>n>>m;
	long long res = n*(n+1)/2;
	m = m%res;
	int i=1;
	while(true){
		if(i>m){
			cout<<m<<endl;
			break;
		}else if(i==m){
			cout<<0<<endl;
			break;
		}
		m = m - i;
		i++;
	}
	return 0;
}

//8 4 2 6 8