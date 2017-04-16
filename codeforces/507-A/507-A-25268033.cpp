#include<bits/stdc++.h>


using namespace std;
#define ll long long
#define mod 1073741824
const long double pi = acos(-1.0);


inline bool cmp(pair<ll,ll> &p1,pair<ll,ll> &p2){
   if(p1.first<=p1.first){
      return true;
   }else
      return false;
}

int main(int argc, char const *argv[])
{
   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   ll n,k,x,y;
   cin>>n>>k;
   vector<pair<ll,ll>> ve;
   for(int i=0;i<n;i++){
      cin>>x;
      ve.push_back({x,i+1});
   }
   sort(ve.begin(),ve.end());
   vector<ll> res;
   for(int i=0;i<n;i++){
      k = k - ve[i].first;
      if(k>=0){
         res.push_back(ve[i].second);
      }else{
         break;   
      }
   }
   //sort(res.begin(),res.end());
   cout<<res.size()<<endl;
   for(int i=0;i<res.size();i++){
      cout<<res[i]<<" \n"[i==res.size()-1];
   }
   return 0;   
}