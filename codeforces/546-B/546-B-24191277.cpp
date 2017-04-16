#include<bits/stdc++.h>


typedef long long ll;


using namespace std;

#define MOD 1000000007



ll dp[101][2];

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	int ar[n];
	map<int,int> ma; 
	for(int i=0;i<n;i++){
		cin>>ar[i];

	}
	sort(ar,ar+n);
	ll res=0;
	for(int i=0;i<n;i++){
		if(ma[ar[i]]==1){
			for(int  j=ar[i]+1;;j++){
				if(ma[j]==0){
					res+=j-ar[i];
					ma[j]=1;
					break;
				}
			}
		}
		else{
			ma[ar[i]]=1;
		}
	}
	cout<<res<<endl;
	return 0;
}