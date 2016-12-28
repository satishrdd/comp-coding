/*****************************************************************************************/
/*																		     			 */
/*  					Satish Reddy Yerva										 			 */
/*																			 			 */
/*****************************************************************************************/
 
#include <bits/stdc++.h>

/* Data types and structures. */

#define vi vector <long long>
#define vl vector <ll> 
#define pii pair<long long, long long>
#define pll pair<ll, ll>
#define vpii vector <pii >
#define vpll vector <pll >
 
/* Data structure helpers. */ 
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define sz(n) (long long)n.size()-1
#define all(n) n.begin(), n.end()
#define has(it,s) if(it!=s.end())
 
/* Input output defines. */
#define sd(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define slf(n) scanf("%lf", &n) 
#define pd(n) prlong longf("%d", n);
#define pl(n) prlong longf("%lld", n);
#define plf(n) prlong longf("%0.9lf", n);
#define ps prlong longf(" ")
#define pe prlong longf("\n")

/* loops */
#define rep(i,j,k) for(long long i=j; i<=k; i++)
#define repd(i,j,k) for(long long i=j; i>=k; i--)
#define iter(it, s) for(auto it=s.begin(); it!=s.end(); it++)

/* constralong longs. */ 
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
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

using namespace std;

inline bool cmp(pair<long long,long long>&p1,pair<long long,long long> &p2){
	if(p1.first>p2.first){
		return true;
	}
	return false;
}

int main()
{
	fast;
	int n;
	cin>>n;
	long long ar[n],dp[n],m=1;
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	dp[0]=1;
	for(int i=1;i<n;i++){
		if(ar[i]>=ar[i-1]){
			dp[i]=dp[i-1]+1;
		}else{
			dp[i]=1;
		}
		m = max(m,dp[i]);
	}
	cout<<m<<endl;
	return 0;
}