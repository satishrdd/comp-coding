#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int re=0,ans=0,tot=0;






int main(int argc, char const *argv[])
{
	/* code */
	long long x,y,n;
	cin>>x>>y>>n;
	int ar[6] = {x,y,y-x,-x,-y,x-y};
	long long temp = ar[(n-1)%6];
	while(true){
		if(temp<0){
			temp = (temp + 1000000007)%1000000007;
		}else{
			cout<<temp%1000000007<<endl;
			break;
		}
	}
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y