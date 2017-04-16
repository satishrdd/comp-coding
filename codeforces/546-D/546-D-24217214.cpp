#include<bits/stdc++.h>


typedef long long ll;


using namespace std;

ll ar[5000001] ;
ll dp[5000001] ;
ll ans[5000001] ;
ll temp=0;
std::vector<ll> g;





int main(int argc, char const *argv[])
{
	/* code */
	//ios_base::sync_with_stdio(0);

      //       cin.tie(0);
        //     cout.tie(0);
	//sieve();
	//ar[0]=1;
	//ar[1]=1;
	for(int i=2;i<=(5000000);i++){
		if(!ar[i]){
			ar[i] = i;
            g.push_back(i);
        }
			for(int j = 0; j < g.size() && g[j] <= ar[i] && i * g[j] <=5000000 ; j ++)
        	{
           		 ar[i * g[j]] = g[j];
        	}
		
	}

	for(int i=2;i<=5000000;i++){
		if(!ar[i]){
			dp[i]=1;
		}else{
			dp[i] =dp[i/ar[i]]+1;
		}
		
		
	}

	for(int i=1;i<=5000000;i++){
		ans[i] = ans[i-1] + dp[i];
	}
	long long cases,a,b;
	//cin>>cases;
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