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

int p[105],temp;
int find(int i){
  return i==p[i]?i:p[i]=find(p[i]);
}

void merge(int i,int j){
   i = find(i);
   j = find(j);
   if(i!=j){
    temp--;
    p[i] =j;
   }
}

signed main()
{
  /* code */
 int cases;
 cin>>cases;
 pair<int ,int> pa[cases+1];
 int x,y;
 temp=cases;
 set<pair<int,int> > myset;
 int flag=0;
 for(int i=0;i<cases;i++){
    cin>>x>>y;
    pa[i] = {x,y};
 }


 for(int i=0;i<cases;i++){
  p[i] = i;
 }

for(int i=0;i<cases;i++) {
        for(int j=0;j<cases;j++) {
            if(pa[i].first == pa[j].first || pa[i].second == pa[j].second) {
                merge(i, j);
            }
        }
    }

 cout<<temp-1<<endl;
 

  return 0;
}