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

ll ciel(double a) { ll ret = a; if(a-ret>EPS) ret++; return ret; }
ll gcd(ll a, ll b) { if(a<b)return gcd(b, a); if(a%b==0)return b; return gcd(b, a%b); }

/* This method does modular exponentiation in log(n). */
ll pow(ll n, ll p) {if(p==0)return 1; if(n<=1)return n;ll res = 1;while(p){if(p&1) res = mod(res*n);n = mod(n*n);p /= 2;} return res;}

double fgcd(double a, double b) { if(fabs(a)<fabs(b)) return fgcd(b, a); if(fabs(b)<GCD_EPS) return a; return fgcd(b, fmod(a,b)); }

/* This method compares whether two doubles are (almost) equal. */
bool db_db_cmp(double a, double b) { return (a+EPS>b && a-EPS<b); }

 
using namespace std;



int main(int argc, char const *argv[])
{
	/* code */

	int cases;
	cin>>cases;
	int l = cases;
	while(cases--){
		long n;
		cin>>n;
		long long ar[n],dp[n+6];

		for(int i=0;i<n;i++){
			scanf("%lld",&ar[i]);
			dp[i]=0;
		}
		dp[n]=0;
		dp[n+1]=0;
		dp[n+2]=0;
		dp[n+3]=0;
		dp[n+4]=0;
		dp[n+5]=0;
		ar[n]=0;
		ar[n+1]=0;
		ar[n+2]=0;
		ar[n+3]=0;
		ar[n+4]=0;
		ar[n+5]=0;
		for(int i=n-1;i>=0;i--){
			dp[i] = ar[i]+dp[i+2];
            if (i+1<n)
                dp[i] = max(dp[i], ar[i]+ar[i+1]+dp[i+4]);
            if (i+2<n)
                dp[i] = max(dp[i], ar[i]+ar[i+1]+ar[i+2]+dp[i+6]);
		}
		printf("%lld\n",dp[0]);
		




		}
	return 0;
}