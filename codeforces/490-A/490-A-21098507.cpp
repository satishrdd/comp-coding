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
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

ll ciel(double a) { ll ret = a; if(a-ret>EPS) ret++; return ret; }
ll gcd(ll a, ll b) { if(a<b)return gcd(b, a); if(a%b==0)return b; return gcd(b, a%b); }
ll lcm(ll a, ll b) { return (a * (b / gcd(a, b))); } // divide before multiply!
/* This method does modular exponentiation in log(n). */
ll pow(ll n, ll p) {if(p==0)return 1; if(n<=1)return n;ll res = 1;while(p){if(p&1) res = mod(res*n);n = mod(n*n);p /= 2;} return res;}

double fgcd(double a, double b) { if(fabs(a)<fabs(b)) return fgcd(b, a); if(fabs(b)<GCD_EPS) return a; return fgcd(b, fmod(a,b)); }

 
using namespace std;
int ar[1000]={0};

// inline bool cmp(pair<ll,ll> &p1,pair<ll,ll> &p2){
// 	if(p1.first<=p2.first){
// 		return true;
// 	}
// 	return false;
// }

int main(int argc, char const *argv[])
{
	/* code */
	
	long long m,n;
	vector<int> c1;
	vector<int> c2;
	vector<int> c3;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		if(m==1){
			c1.push_back(i+1);
		}else if(m==2){
			c2.push_back(i+1);
		}else{
			c3.push_back(i+1);
		}
	}
	//cout<<c1.size()<<" "<<c2.size()<<" "<<c3.size()<<endl;
	ll  k =min(c1.size(),min(c2.size(),c3.size()));
	cout<<k<<endl;
	if(k!=0)
	for(int i=0;i<k;i++){
		cout<<c1[i]<<" "<<c2[i]<<" "<<c3[i]<<endl;
	}
	
	return 0;
}