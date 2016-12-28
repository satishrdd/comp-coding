#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	int cases;
	long long res=0,i=0,n,m;
	cin>>n>>m;
	while(i<=n){
		//res = max(res,i+min());
		long long temp = n-i;
		long long temp1 = m-2*i;
		if(temp1>=0){
			res = max(res,i+min(temp1,temp/2));
		}
		i++;
	}
	cout<<res<<endl;
	return 0;
}