/*****************************************************************************************/
/*																		     			 */
/*  					Satish Reddy Yerva										 			 */
/*																			 			 */
/*****************************************************************************************/
 
#include <bits/stdc++.h>

/* Data types and structures. */
#define ll long long int
#define llu long long int unsigned
#define vi vector <int>
#define vl vector <ll> 
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector <pii >
#define vpll vector <pll >
 
/* Data structure helpers. */ 
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define sz(n) (int)n.size()-1
#define all(n) n.begin(), n.end()
#define has(it,s) if(it!=s.end())
 
/* Input output defines. */
#define sd(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define slf(n) scanf("%lf", &n) 
#define pd(n) printf("%d", n);
#define pl(n) printf("%lld", n);
#define plf(n) printf("%0.9lf", n);
#define ps printf(" ")
#define pe printf("\n")

/* loops */
#define rep(i,j,k) for(int i=j; i<=k; i++)
#define repd(i,j,k) for(int i=j; i>=k; i--)
#define iter(it, s) for(auto it=s.begin(); it!=s.end(); it++)

/* constraints. */ 
#define max_size 100005
#define max_sieve_size 1000005
#define max_matrix_size 100
#define max_log 17
#define INF 1000000000000000000
#define MOD 1000000007
#define EPS 0.0000000001
#define GCD_EPS 0.0001
#define PI 3.14159265358979323846
#define mod(a) ((a)%MOD)
#define bcnt __builtin_popcount 

 
using namespace std;

int pr[1000002] = {0};

void Seive(){
	pr[1]=1;
	for(long i=2;i<=1000;i++){
		if(pr[i]==0){
			for(long j=2*i ;j<1000001;j+=i) pr[j] = i ;
		}
	}

	for(long i=2;i<1000001;i++){
		if(pr[i]==0){
			pr[i]=i;
		}
	}
	
}

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin>>n;
	long long ar[n],sum[n];
	cin>>ar[0];
	sum[0] = ar[0];
	for (int i = 1; i < n; ++i)
	{
		/* code */
		cin>>ar[i];
		sum[i] = ar[i]+sum[i-1];
	}

	sort(ar,ar+n);
	long long sum1[n];
	sum1[0] = ar[0];
	for (int i = 1; i < n; ++i)
	{
		/* code */
		
		sum1[i] = ar[i]+sum1[i-1];
	}

	int k,l,r,c;
	cin>>k;
	while(k--){
		cin>>c>>l>>r;
		if(c==1){
			if(l>=2){
			cout<<sum[r-1]-sum[l-2]<<endl;
			}else{
				cout<<sum[r-1]<<endl;
			}
		}else{
			if(l>=2){
			cout<<sum1[r-1]-sum1[l-2]<<endl;
			}else{
				cout<<sum1[r-1]<<endl;
			}
		}
	}
	return 0;
}