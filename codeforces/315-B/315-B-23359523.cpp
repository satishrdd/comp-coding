#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	long long n,m,a,b,c;
	cin>>n>>m;
	long long temp=0;
	long long ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	while(m--){
		cin>>a;
		if(a==1){
			cin>>b>>c;
			ar[b-1] = c;
			ar[b-1]-=temp;
		}else if(a==2){
			cin>>b;
			temp  = temp+b;
		}else{
			cin>>b;
			cout<<ar[b-1]+temp<<endl;
		}
	}
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y