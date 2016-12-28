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
	long long k,u;
	vector<pair<long long,long long>> pa;
	long long remaining=0;
	cin>>k;
	vector<long long> ve;
	while(k--){
		cin>>u;
		ve.push_back(u);
	}
	for(long long i=0;i<5;i++){
		cin>>u;
		pa.push_back({u,i});
	}
	long long count[5]={0};
	sort(pa.begin(),pa.end(),cmp);
	
	
	for(long long i=0;i<ve.size();i++){
		remaining+=ve[i];
		for(long long j=0;j<pa.size();j++){
			if(pa[j].first<=remaining){
				long long u = remaining/pa[j].first;
				remaining -=pa[j].first*u;
				count[pa[j].second]= count[pa[j].second]+u;
			}
		}

	}

	for(long long i=0;i<5;i++){
		cout<<count[i]<<" ";
	}
	cout<<endl<<remaining<<endl;
	return 0;
}