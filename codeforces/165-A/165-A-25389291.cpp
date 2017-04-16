#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  //cout.precision(20);
  long long n,x,y,c1=0,count=0,c2=0,c3=0,c4=0;
  cin>>n;
  vector<pair<ll,ll>> ve;
  ve.resize(n);
  for(int i=0;i<n;i++){
      cin>>x>>y;
      ve[i] = {x,y};
  }
  for(int i=0;i<n;i++){
      c1=0,c2=0,c3=0,c4=0;
      for(int j=0;j<n;j++){
            if(i==j){
                  continue;
            }
            if(ve[i].first==ve[j].first && ve[i].second>ve[j].second){
                  c1++;
            }else if(ve[i].first==ve[j].first && ve[i].second<ve[j].second){
                  c2++;
            }else if(ve[i].first>ve[j].first && ve[i].second==ve[j].second){
                  c3++;
            }else if(ve[i].first<ve[j].first && ve[i].second==ve[j].second){
                  c4++;
            }

            if((c1>=1) && (c2>=1) && (c3>=1) && (c4>=1)){
                  count++;
                  break;
            }

      }
  }
  cout<<count<<endl;
  return 0;
}