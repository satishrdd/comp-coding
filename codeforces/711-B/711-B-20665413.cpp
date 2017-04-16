/*
    Arjun Ahuja
    CodeForces Handle: .ahuja
    Codechef Handle: arjun_95
    Spoj Handle: skilled_devil
    */
#include <algorithm>
#include <assert.h>
#include <complex>
#include <ctime>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <math.h>
#include <memory.h>
#include <queue>
#include <set>
#include <stack>
#include <stdio.h>
#include <string>
#include <unistd.h>
#include <vector>
#include <bitset>
#include <iomanip>
#include <limits.h>
#include <pthread.h>
#include <utility>

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
typedef pair<LL, LL> PLL;
typedef vector<PLL> VPLL;
typedef bitset<11> bit;
typedef queue<LL> QLL;
typedef string str;

#define arjun int main()
#define FOR(i, x, y) for (LL i = (x); i < (y); ++i)
#define FORV(i, x)                                                             \
  for (std::vector<LL>::iterator i = (x.begin()); i != (x.end()); ++i)
#define FORS(i, x)                                                             \
  for (std::set<LL>::iterator i = (x.begin()); i != (x.end()); ++i)
#define sd(x) scanf("%lld", &x)
#define sd2(x,y) scanf("%lld %lld", &x,&y)
#define sd2c(x,y) scanf("%c %c", &x,&y)
#define sd3(x,y,z) scanf("%lld %lld %lld", &x,&y,&z)
#define sd3c(x,y,z) scanf("%c %c %c", &x,&y,&z)
#define sdi(x) scanf("%d", &x)
#define sdi2(x,y) scanf("%d %d", &x,&y)
#define sdi3(x,y,z) scanf("%d %d %d", &x,&y,&z)
#define ps(x) printf("%s\n",x)
#define p(e) printf("\n");
#define pb(e) push_back(e)
#define mp make_pair
#define All(x) x.begin(), x.end()
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
#define MAX 1e18
#define PI 3.14159265

template <typename T> T maxm(T a, T b) { return (a > b) ? a : b; }
template <typename T> T minm(T a, T b) { return (a < b) ? a : b; }
template <typename T> T expo(T e, T n) {
  T x = 1, p = e;
  while (n) {
    if (n & 1)
      x = x * p;
    p = p * p;
    n >>= 1;
  }
  return x;
}
template <typename T> T power(T e, T n, T m) {
  T x = 1, p = e;
  while (n) {
    if (n & 1)
      x = (x * p) % m;
    p = (p * p) % m;
    n >>= 1;
  }
  return x;
}
template <typename T> T InverseEuler(T a, T m) {
  return (a == 1 ? 1 : power(a, m - 2, m));
}
template <typename T> T lcm(T a, T b) { return (a * (b / gcd(a, b))); }

LL length(string s)
{
  return s.length();
}

LL MOD = (LL)(1e9 + 7);

namespace patch {
  template <typename T> std::string to_string(const T &n) {
    std::ostringstream stm;
    stm << n;
    return stm.str();
  }
}

arjun {
  fast;
  LL n;
  cin>>n;
  set<LL> sum;
  set<LL> sumor;
  LL* graph[n];
  FOR(i,0,n){
    graph[i] = new LL[n];
  }
  LL x,y;
  FOR(i,0,n){
    FOR(j,0,n){
      cin>>graph[i][j];
      if(graph[i][j] == 0){
        x = i;
        y = j;
      }
    }
  }
  LL sume = 0;
  LL sumo = 0;
  FOR(i,0,n){
    sume = 0;
    sumo = 0;
    FOR(j,0,n){
      if(x == i) {
        sumo+=graph[i][j];
      }
      else sume+=graph[i][j];
    }
    if(sume == 0){
      //cout<<sumo<<endl;
      sumor.insert(sumo);
    }
    else{
      //cout<<sume<<endl;
      sum.insert(sume);
    }
  }
  FOR(i,0,n){
    sume = 0;
    sumo = 0;
    FOR(j,0,n){
      if(y == i) {
        sumo+=graph[j][i];
      }
      else sume+=graph[j][i];
    }
    if(sume == 0){
      sumor.insert(sumo);
    }
    else sum.insert(sume);
  }
  sume = 0;
  sumo = 0;
  bool first = 0;
  bool second = 0;
  FOR(i,0,n){
    if(x==i && y==i) first = 1;
    sume+=graph[i][i];
  }
  int index = n-1;
  while(index>-1)
  {
    if(x==((n-1)-index) && y==index) second = 1;
    sumo+=graph[((n-1)-index)][index];
    index--;
  }
  if(first){
    sumor.insert(sume);
  }
  else{
    sum.insert(sume);
  }
  if(second){
    sumor.insert(sumo);
  }
  else{
    sum.insert(sumo);
  }
  if(n==1){
    cout<<1<<endl;
    return 0;
  }
  if(sum.size()>1 || sumor.size()>1){
    cout<<-1<<endl;
  }
  else if((*(sum.begin())-*(sumor.begin()))<=0) cout<<-1<<endl;
  else cout<<*(sum.begin())-*(sumor.begin())<<endl;
  return 0;
}