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
#define pstr(s) printf("%s\n",s);
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


ll n,m,t,x;
vi doors[max_size];
ll status[max_size],parent[2*max_size];


inline void init(){
	FOR(i,0,2*max_size+1){
		parent[i]=i;
	}
}
inline ll find(ll x){
	if(parent[x]==x){
		return x;
	}
	parent[x] = find(parent[x]);
	return parent[x];
}
inline void union1(ll x,ll y){
	parent[find(x)] = find(y);
}

int main(int argc, char const *argv[])
{
	/* code */
	init();
	sl(n);sl(m);
	FOR(i,1,n+1){
		sl(status[i]);
	}
	FOR(i,1,m+1){
		sl(t);
		while(t--){
			sl(x);
			doors[x].pb(i);
		}
	}
	FOR(i,1,n+1){
		if(status[i]==1){
			union1(doors[i][0],doors[i][1]);
			union1(doors[i][0]+m+1,doors[i][1]+m+1);
		}else{
			union1(doors[i][0],doors[i][1]+m+1);
			union1(doors[i][0]+m+1,doors[i][1]);
		}
	}
	FOR(i,1,m+1){
		if(find(i)==find(i+m+1)){
			pstr("NO");
			return 0;
		}
	}
	pstr("YES")
	return 0;
}