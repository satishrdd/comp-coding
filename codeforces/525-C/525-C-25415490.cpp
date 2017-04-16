#include <bits/stdc++.h>
using namespace std;




int main()
{
  long long n,temp,ans=0;
  long long cnt[1000005]={0};
  memset(cnt,0,sizeof(cnt));
  vector<long long> ve;
  long long mi=999999999,ma=-1;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>temp;
    cnt[temp]++;
    mi = min(mi,temp);
    ma = max(ma,temp);
  }

  for(int i=ma;i>=mi;i--){
    if(cnt[i]%2==1){
        cnt[i]--;
        if(cnt[i-1]>0)
          cnt[i-1]++;
    }

    for(int j=0;j<cnt[i];j+=2){
      ve.push_back(i);
      //cout<<i<<endl;
    }

  }
 // cout<<ve.size()<<endl;

  if(ve.size()<=1){cout<<0<<endl;return 0;}
  for(int i=0;i<ve.size()-1;i=i+2){
    if(i>=ve.size()){
      break;
    }else{
      ans += ve[i]*ve[i+1];
    }
  }
  cout<<ans<<endl;
  return 0;
}