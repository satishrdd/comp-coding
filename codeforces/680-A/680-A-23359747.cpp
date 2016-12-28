#include<iostream>
#include<bits/stdc++.h>

using namespace std;






int main(int argc, char const *argv[])
{
	/* code */
	int t[5];
	int sum=0,ans=0;
	for(int i=0;i<5;i++){
		cin>>t[i];
		sum+=t[i];
	}
	ans=sum;
	//cout<<ans<<endl;
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(t[i]==t[j]){
				ans = min(ans,sum-2*t[i]);
			}
		}
	}
	//cout<<ans<<endl;
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			for(int k=j+1;k<5;k++){
				if(t[i]==t[j] && t[i]==t[k]){
					ans = min(ans,sum-3*t[i]);
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

//8 4 2 6 8


///x y y-x -x -y x-y