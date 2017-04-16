#include<bits/stdc++.h>


typedef unsigned long long ll;


using namespace std;


ll C[31][31]={0};

void initialize(){
	for(int i=1;i<=30;i++){
		C[i][0]=1;
		C[i][i]=1;
	}

	for(int i=1;i<=30;i++){
		for(int j=1;j<=i;j++){
			if(C[i][j]==0){
				C[i][j] = C[i-1][j] + C[i-1][j-1];
			}
		}
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	ll n,m,t;
	initialize();
	cin>>n>>m>>t;
	//cout<<fact(30)<<endl;
	ll res=0;
	//cout<<C[5][3]<<endl;
	for(ll i=4;i<=n;i++){
		ll r = t-i;
		
		if(r>=1 && r<=m){
			res= res+C[n][i]*C[m][r];
		}
		//cout<<i<<" "<<r<<" "<<res<<endl;
	}
	cout<<res<<endl;
	return 0;
}