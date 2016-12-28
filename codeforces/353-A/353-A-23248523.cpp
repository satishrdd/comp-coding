#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int re=0,ans=0,tot=0;






int main(int argc, char const *argv[])
{
	/* code */
	long long k;
	long long n,m;
	cin>>k;
	int flag=0,flag1=0;
	long long usum=0,lsum=0;
	for(int i=0;i<k;i++){
		cin>>n>>m;
		lsum+=n;
		usum+=m;
		if((n%2==0 &&m%2!=0))
			flag=1;
		if(n%2!=0 &&m%2==0){
			flag1=1;
		}
	}

	if(lsum%2==0&&usum%2==0){
		cout<<0<<endl;
	}else if(lsum%2==0&&usum%2!=0){
		cout<<-1<<endl;
	}else if(lsum%2!=0&&usum%2==0){
		cout<<-1<<endl;
	}else{
		if(k==1){
			cout<<-1<<endl;
		}
		else if(flag==1||flag1==1){
			cout<<1<<endl;
		}else{
			cout<<-1<<endl;
		}
		
	}
	return 0;
}

//8 4 2 6 8