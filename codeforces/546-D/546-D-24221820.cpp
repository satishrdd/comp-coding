#include<bits/stdc++.h>


typedef long long ll;


using namespace std;

ll ar[5000001] ;
ll dp[5000001] ;
ll ans[5000001] ;
ll temp=0;


void sieve(){
	ar[0]=1;
	ar[1]=1;
	for(int i=2;i*i<=(5000000);i++){
		if(!ar[i]){
			for(int j=i*i;j<=5000000;j=j+i){
				if(!ar[j])
				ar[j]=i;
			}
		}
	}

	for(int i=2;i<=5000000;i++){
		if(!ar[i]){
			dp[i]=1;
		}else{
			dp[i] =dp[i/ar[i]]+1;
		}
		ans[i] = ans[i-1] + dp[i];
		
	}

}



int main(int argc, char const *argv[])
{
	/* code */
	
	sieve();
	long long cases,a,b;
	scanf("%lld",&cases);
	while(cases--){
		//long long res=0;
		//cin>>a>>b;
		scanf("%lld%lld",&a,&b);
		//cout<<ans[a]-ans[b]<<endl;
		printf("%lld\n",ans[a]-ans[b] );
	}


	return 0;
}