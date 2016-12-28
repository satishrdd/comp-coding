#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	/* code */
	long long n,d;
	cin>>n>>d;
	long long ar[n]={0};
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	unsigned long long count=0;
	int l=0;
	for(int i=2;i<n;){
		if(ar[i]-ar[l]<=d){
			//cout<<ar[l]<<" "<<ar[i]<<endl;
			long long temp =  (i-l);
			//cout<<temp<<endl;
			count += temp*(temp-1)/2;
			i++;
		}else{
			if(i-l==2){
				i++;
				l++;
			}else{
				l++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}