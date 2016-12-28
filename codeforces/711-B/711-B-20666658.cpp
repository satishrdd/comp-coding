/*****************************************************************************************/
/*                                                */
/*            Satish Reddy Yerva                            */
/*                                              */
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
#define rep(i,j,k) for(int i=j; i<k; i++)
#define repd(i,j,k) for(int i=j-1; i>=k; i--)
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
  int n;
  cin>>n;
  long long a[n+1][n+1];
  int expos,eypos;

  long long rowsum[n+1]={0};
  long long colsum[n+1]={0};

  rep(i,1,n+1){
    rep(j,1,n+1){
      cin>>a[i][j];
      if(a[i][j]==0){
        expos=i;
        eypos=j;

      }
      rowsum[i]+=a[i][j];
      colsum[j] +=a[i][j];
    }
  }

  set<long long > myset;
  rep(i,1,n+1){
    myset.insert(rowsum[i]);
    myset.insert(colsum[i]);
  }
  if(n==1){
    cout<<1<<endl;
    return 0;
  }
  if(myset.size()!=2){
    cout<<-1<<endl;return 0;
  }else{
    long long diagsum1=0,diagsum2=0,rows=0,cols=0;
  rep(i,1,n+1){
    rows+=a[expos][i];
    cols +=a[i][eypos];
    diagsum1+=a[i][i];
    diagsum2+=a[i][n+1-i];
  }
  
    myset.insert(diagsum2);
    myset.insert(diagsum1);

    if(myset.size()>2){
      cout<<-1<<endl;
    }
    else if(myset.size()==1){
      cout<<-1<<endl; 
    }else if(rows>diagsum1||rows>diagsum2){
      cout<<-1<<endl;
    }
    else{

      if((expos==eypos)&&(expos+eypos!=n+1)){
        if(rows>=diagsum2){
          cout<<-1<<std::endl;
          return 0;
        }
      }else if((expos+eypos==n+1)&&(expos!=eypos)){
        if(rows>=diagsum1){
          cout<<-1<<std::endl;
          return 0;
        }
      }
      std::set<long long>::iterator it = myset.begin();
      long long x=*it;
      it++;
      long long y = *it;
      if(expos==eypos){
        if(expos+eypos==n+1){
          diagsum2+=abs(y-x);
          diagsum1+=abs(y-x);
        }else{
           diagsum1+=abs(y-x);
        }
      }else if(expos+eypos==n+1){
        diagsum2+=abs(y-x);
      }
      if((rows+abs(y-x)==diagsum2)&&(rows+abs(y-x)==diagsum1))
      cout<<abs(y-x)<<endl;
      else{
        cout<<-1<<endl;
      }
    }

  
  
 

 } 
  return 0;
}