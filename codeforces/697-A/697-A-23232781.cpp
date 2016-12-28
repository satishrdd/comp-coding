#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	long long t,s,x;
	cin>>t>>s>>x;
	if(x<t){
		cout<<"NO"<<endl;
	}else if(t==x){
		cout<<"YES"<<endl;
	}else{
		long long res = x-t;
		if(res%s==0){
			if(res==0){
				cout<<"NO"<<endl;
			}else{
				cout<<"YES"<<endl;
			}
		}else if((res-1)%s==0){
			if(res-1==0){
				cout<<"NO"<<endl;
			}else{
				cout<<"YES"<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}

//8 4 2 6 8