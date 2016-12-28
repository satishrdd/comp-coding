#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int re=0,ans=0,tot=0;






int main(int argc, char const *argv[])
{
	/* code */
	long long k,l;
	cin>>k>>l;
	if(l%k!=0){
		cout<<"NO"<<endl;
	}else{
		int i=1;
		while(true){
			///cout<<"dsf";
			if((long long)pow(k,i)==l){
				cout<<"YES"<<endl;
				cout<<i-1<<endl;	
				break;
			}else if((long long)pow(k,i)>l){
				cout<<"NO"<<endl;
				break;
			}else{
				i++;
			}
		}
	}
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y