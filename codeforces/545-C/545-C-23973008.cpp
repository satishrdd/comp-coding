#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n,a1,h1,a2,h2;
	cin>>n;
	long long ans=0;
	cin>>a1>>h1;
	ans++;
	int prev=1;
	for(int i=1;i<n;i++){
		cin>>a2>>h2;
		if(prev==0){

				if(a1+h1 <a2){
			//		cout<<i<<endl;
					ans++;
					a1=a1+h1;
				}
			}
		if(i==n-1){
			//cout<<i<<endl;

			ans++;
		}else{
			if(a2-h2 > a1){
			//	cout<<i<<endl;
				ans++;
				prev=1;
			}else{
				prev=0;	
			}

			a1 = a2;
			h1 = h2;
			
		}
	}
	cout<<ans<<endl;



	
	return 0;
}