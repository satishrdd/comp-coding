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
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

ll ciel(double a) { ll ret = a; if(a-ret>EPS) ret++; return ret; }
ll gcd(ll a, ll b) { if(a<b)return gcd(b, a); if(a%b==0)return b; return gcd(b, a%b); }
ll lcm(ll a, ll b) { return (a * (b / gcd(a, b))); } // divide before multiply!
/* This method does modular exponentiation in log(n). */
ll pow(ll n, ll p) {if(p==0)return 1; if(n<=1)return n;ll res = 1;while(p){if(p&1) res = mod(res*n);n = mod(n*n);p /= 2;} return res;}

double fgcd(double a, double b) { if(fabs(a)<fabs(b)) return fgcd(b, a); if(fabs(b)<GCD_EPS) return a; return fgcd(b, fmod(a,b)); }

 
using namespace std;



int main(int argc, char const *argv[])
{
	/* code */
	fast;
	int m,s;
	string res="";
	cin>>m>>s;
	if(s==0 and m==1){
		cout<<"0 0"<<endl;
		return 0;
	}else if(s==0 or s>9*m){
		cout<<"-1 -1"<<endl;
		return 0;
	}else{
		int k=s;
		if(k<=9){
			char x = '0'+k;
			res=res+x;
			int a = m-1;
			while(a--){
				res+='0';
			}
		}else{
			int a=m;
			while(k>9){
				res+='9';
				a--;
				k=k-9;
			}
			if(a!=0){
				char x = '0'+k;
				res = res+x;
				a--;
			}
			while(a--){
				res+='0';
			}
		}

	}

	//cout<<res<<endl;

	string res1(m,'0');
	res1[0]='1';
	s--;
	int k = s/9;
	int u = s%9;
	int i=m-1;
	while(k--){
		res1[i]='9';
		i--;
	}

	char x = res1[i]+u;
	res1[i] = x;
	cout<<res1<<" "<<res<<endl;
	return 0;
}