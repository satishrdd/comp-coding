#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string s="";
	int n,m;
	cin>>n>>m;
	if(n==m){
		string temp="";
		for(int i=0;i<n;i++){
			temp +="BG";
		}
		s = temp;
	}else{
		if(n>m){
			string temp="";
			for(int i=0;i<m;i++){
				temp +="BG";
			}
			n = n -m;
			string temp1 (n,'B');
			s = temp  + temp1;
		}else{
			string temp ="";
			for(int i=0;i<n;i++){
				temp +="GB";
			}
			m = m -n;
			string temp1 (m,'G');
			s = temp + temp1;
		}
	}
	cout<<s<<endl;
	return 0;
}