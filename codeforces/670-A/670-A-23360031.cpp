#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	long long n;
	cin>>n;
	if(n%7==0){
		cout<<2*(n/7)<<" "<<2*(n/7)<<endl;
	}else{
		int k = n%7;
		if(k==6){
			cout<<2*(n/7)+1<<" "<<2*(n/7) + min(k,2)<<endl;
		}else{
			cout<<2*(n/7)<<" "<<2*(n/7) + min(k,2)<<endl;
		}
	}
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y