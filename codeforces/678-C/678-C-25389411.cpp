#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a,ll b){
      return (a*b)/(__gcd(a,b));
}
int main()
{
  //cout.precision(20);
  long long n,a,b,p,q;
  cin>>n>>a>>b>>p>>q;
  cout<<(n/a)*p + (n/b)*q - (n/(lcm(a,b)))*(min(p,q))<<endl;
  return 0;
}