#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int n;
	string s;
	cin>>n;
	int m[n][n];
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<n;j++){
			if(s[j]=='o'){
				m[i][j]=1;		
			}else{
				m[i][j]=0;
			}
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			count=0;
			if(i!=0){
				count+=m[i-1][j];
			}
			if(i!=n-1){
				count+=m[i+1][j];	
			}
			if(j!=0){
				count+=m[i][j-1];
			}
			if(j!=n-1){
				count+=m[i][j+1];
			}
			if(count%2!=0){
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}