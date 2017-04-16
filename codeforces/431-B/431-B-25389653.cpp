#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a,ll b){
      return (a*b)/(__gcd(a,b));
}
int main()
{
  //cout.precision(20);
  vector<ll> ve;
  ll ar[5][5],p[5],ans=0,temp;
  for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
            cin>>ar[i][j];
      }
  p[i]=i;
  }

  do{
      temp = ar[p[0]][p[1]] + ar[p[1]][p[0]]+2*ar[p[2]][p[3]]+2*ar[p[3]][p[2]]+ar[p[1]][p[2]] + ar[p[2]][p[1]]+ 2*ar[p[4]][p[3]]+2*ar[p[3]][p[4]];
      if(temp>ans){
            ans=temp;
      }
  }while(next_permutation(p,p+5));
  cout<<ans<<endl;
  return 0;
}