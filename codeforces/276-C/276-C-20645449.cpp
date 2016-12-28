/*****************************************************************************************/
/*                                                */
/*            Satish Reddy Yerva                            */
/*                                              */
/*****************************************************************************************/
 
#include <bits/stdc++.h>

/* Data types and structures. */

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

using namespace std;

#define int long long
using namespace std;

signed main()
{
  /* code */
 long long n,k;
 cin>>n>>k;
 long long ar[n],b[n]={0},val[n];
 for(int i=0;i<n;i++){
  sl(ar[i]);
 }

 sort(ar,ar+n);
 long long x,y;
 while(k--){
  sl(x);
  sl(y);
  x--;
  y--;
  b[x]++;
  if(y+1<n){
    b[y+1]--;
  }
 }
val[0] = b[0];
 for(int i=1;i<n;i++){
  val[i] = b[i] + val[i-1];
 }

 sort(val,val+n);
 long long res =0;
 for(int i=0;i<n;i++){
  res+=ar[i]*val[i];
 }

 pl(res);;
 pe;


  return 0;
}