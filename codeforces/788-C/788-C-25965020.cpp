#include <bits/stdc++.h>
using namespace std;

//type helpers
#define ll long long
#define vi vector <int>
#define vl vector <ll> 
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector <pii >
#define vpll vector <pll >
//debugging
#define debug(x) cout<<"debugging "<<x<<endl

//loops
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define FORD(i,a,b) for(ll i=a-1;i>=b;i--)
#define iter(it, s) for(auto it=s.begin(); it!=s.end(); it++)

//io helpers
#define sd(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define slf(n) scanf("%lf", &n) 
#define pd(n) printf("%d", n)
#define pl(n) printf("%lld", n)
#define plf(n) printf("%0.9lf", n)
#define ps printf(" ")
#define pn printf("\n")


//ds helpers
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define sz(n) (ll)n.size()


//fast input and output when using cin,cout
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
//some constants
const int INF = 1<<29;
#define MOD 1000000007
#define PI 3.14159265358979323846
#define EPS 0.0000000001
#define max_size 100005

//some helper functions
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9;}
inline ll lcm(ll a,ll b){ return (a*b)/(__gcd(a,b));}
#define mod(a) ((a)%MOD)
inline ll ciel(double a) { ll ret = a; if(a-ret>EPS) ret++; return ret; }
inline ll powf(ll n, ll p) {if(p==0)return 1; if(n<=1)return n;ll res = 1;while(p){if(p&1) res = mod(res*n);n = mod(n*n);p /= 2;} return res;}
inline bool ispoweroftwo(ll x){return (x && !(x&(x-1)));}

#define MAXN 2006

bool vis[MAXN];

int main(int argc, char const *argv[])
{
	/* code */
	ll t,n,k;
	sl(n);sl(k);
	FOR(i,0,k){
		sl(t);
		vis[t]=true;
		if(t==n){
			pl(1LL);pn;
			return 0;
		}
	}
	bitset<MAXN> temp,res;
	res.set(0);

	FOR(i,0,MAXN){
		FOR(j,0,n){
			if(vis[j]){
				temp = temp | res>>n-j;
			}
		}
		FOR(j,n+1,MAXN){
			if(vis[j]){
				temp = temp | res<<j-n;
			}
		}
		res = temp;
		temp.reset();
		if(res[0]){
			pl(i+1);pn;
			return 0;
		}
	}
	pl(-1LL);pn;
	return 0;
}