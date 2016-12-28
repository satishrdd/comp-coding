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
	long long x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	long long res = min(abs(x2-x1),abs(y2-y1));
	cout<<res + max(abs(x2-x1),abs(y2-y1))-res<<endl;

	return 0;
}

//8 4 2 6 8