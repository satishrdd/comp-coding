		/*****************************************************************************************/
/*																		     			 */
/*  					Satish Reddy Yerva										 			 */
/*																			 			 */
/*****************************************************************************************/
 
#include <bits/stdc++.h>
#include <bitset>
#include <iostream>

using namespace std;
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
#include <bitset> // compact STL for
ll _sieve_size; // ll is defined as:
bitset<10000010> bs;
vi primes;
ll ciel(double a) { ll ret = a; if(a-ret>EPS) ret++; return ret; }
ll gcd(ll a, ll b) { if(a<b)return gcd(b, a); if(a%b==0)return b; return gcd(b, a%b); }
ll lcm(ll a, ll b) { return (a * (b / gcd(a, b))); } // divide before multiply!
/* This method does modular exponentiation in log(n). */
ll pow(ll n, ll p) {if(p==0)return 1; if(n<=1)return n;ll res = 1;while(p){if(p&1) res = mod(res*n);n = mod(n*n);p /= 2;} return res;}

double fgcd(double a, double b) { if(fabs(a)<fabs(b)) return fgcd(b, a); if(fabs(b)<GCD_EPS) return a; return fgcd(b, fmod(a,b)); }

/* This method compares whether two doubles are (almost) equal. */
bool db_db_cmp(double a, double b) { return (a+EPS>b && a-EPS<b); }

void sieve(ll upperbound) { // create list of primes in [0 .. upperbound]
_sieve_size = upperbound + 1; // add 1 to include upperbound
bs.reset(); bs.flip(); // set all numbers to 1
bs.set(0, false); bs.set(1, false); // except index 0 and 1
for (ll i = 2; i <= _sieve_size; i++) if (bs.test((size_t)i)) {
// cross out multiples of i starting from i * i!
for (ll j = i * i; j <= _sieve_size; j += i) bs.set((size_t)j, false);
primes.push_back((int)i); // also add this vector containing list of primes
}
} 


bool isPrime(ll N) { // a good enough deterministic prime tester
if (N < _sieve_size) return bs.test(N); // O(1) for small primes
rep (i, 0, primes.size() - 1) if (N % primes[i] == 0) return false;
return true; // it takes longer time if N is a large prime!
} 


vi primeFactors(int N) {
vi factors;
// vi "primes" (generated by sieve) is optional
int PF_idx = 0, PF = primes[PF_idx]; // using PF = 2, 3, 4, ..., is also ok.
while (N != 1 && (PF * PF <= N)) { // stop at sqrt(N), but N can get smaller
while (N % PF == 0) { N /= PF; factors.push_back(PF); } // remove this PF
PF = primes[++PF_idx]; // only consider primes!
}
if (N != 1) factors.push_back(N); // special case if N is actually a prime
return factors;
}
 
using namespace std;

ll phi(ll N) {
vi factors = primeFactors(N);
vi::iterator new_end = unique(factors.begin(), factors.end()); // get unique
ll result = N;
for (vi::iterator i = factors.begin(); i != new_end; i++)
result = result - result / *i;
return result;
}
long long power(long long a,long long b,long long m){
  long long x=1,y=a;
  while(b>0){
    if(b%2!=0){
     x=(x*y)%m;
    }
    y=(y*y)%m;
    b>>=1;
  }
  return x;
}

int main(int argc, char const *argv[])
{
	/* code */
	ll n,cases,p;
	cin>>cases;
	while(cases--){
		cin>>n>>p;
		ll res =-1;
		if(n>=p){
			cout<<0<<endl;
			continue;
		}
		ll x=1;
		for(long i=n+1;i<p;i++){
			x = (x*i)%p;
		}
		ll z = power(x,p-2,p);
		res = (res*z)%p;
		res = res+p;
		cout<<res<<endl;
	}
return 0;

}