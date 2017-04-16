#include<bits/stdc++.h>


using namespace std;
#define ll long long
#define mod 1073741824
const long double pi = acos(-1.0);




int main(int argc, char const *argv[])
{
   ll n,x,y,w=0,m1=0,m2=0;
   cin>>n;
   vector<pair<ll,ll>> ve;
   vector<ll> h;
   for(int i=0;i<n;i++){
      cin>>x>>y;
      w+=x;
      ve.push_back({x,y});
      h.push_back(y);
   }
   sort(h.begin(),h.end());
   m1 = h[n-1];
   m2=h[n-2];
   for(int i=0;i<n;i++){
      cout<<(w-ve[i].first)*((ve[i].second==m1)?m2:m1)<<" \n"[i==n-1];
   }
   return 0;   
}