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
   ll n,res=0;
   cin>>n;
   ll ar[n];
   string s[n],re[n];
   ll dp[n][2];
   for(int i=0;i<n;i++){
      cin>>ar[i];
   }
   for(int i=0;i<n;i++){
      cin>>s[i];
      re[i] =s[i];
      reverse(re[i].begin(),re[i].end());
   }
   dp[0][0]=0;
   dp[0][1]=ar[0];
   bool poss[n][2];

   memset(poss,false,sizeof(poss));
   poss[0][0]=true;
   poss[0][1]=true;
   for(int i=1;i<n;i++){
      dp[i][0]=9999999999999999;
      dp[i][1]=9999999999999999;
      if(poss[i-1][0]){
         if(s[i]>=s[i-1]){
            poss[i][0]=true;
            dp[i][0] = dp[i-1][0];
         }
         if(re[i]>=s[i-1]){
            poss[i][1]=true;
            dp[i][1] = dp[i-1][0] + ar[i];
         }
      }
      if(poss[i-1][1]){
         if(s[i]>=re[i-1]){
            poss[i][0]=true;
            dp[i][0] = min(dp[i][0],dp[i-1][1]);
         }
         if(re[i]>=re[i-1]){
            poss[i][1]=true;
            dp[i][1] = min(dp[i][1],dp[i-1][1] + ar[i]);
         }
      }
   }
   if(poss[n-1][0] || poss[n-1][1]){
      cout<<min(dp[n-1][0],dp[n-1][1])<<endl;
   }else{
      cout<<-1<<endl;
   }
   return 0;   
}