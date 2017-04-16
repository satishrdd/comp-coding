#include<bits/stdc++.h>


using namespace std;
#define ll long long
vector<int> ve[1000001];
vector<int> ans;
int r;
ll temp[1000001];

int dfs(int root,int val){
   int t = temp[root];
   for(int i=0;i<ve[root].size();i++){
      t+=dfs(ve[root][i],val);   
   }
   if(t==val){
      if(ans.size()<2 && root !=r){
         ans.push_back(root);
         return 0;
      }
   }
   return t;
}

int main(int argc, char const *argv[])
{
   /* code */
   ll n,t,sum=0;
   cin>>n;
   for(int i=1;i<=n;i++){
      scanf("%lld%lld",&t,&temp[i]);
      //cin>>t>>temp[i];
      sum+=temp[i];
      if(t!=0)
         ve[t].push_back(i);
      else{
         r=i;
      }
   }

   if(sum%3!=0){
      printf("-1\n");
      //cout<<-1<<endl;
   }else{
      dfs(r,sum/3);
      if(ans.size()<2){
         printf("-1\n");
         //cout<<-1<<endl;
      }else{
         printf("%d %d\n",ans[0],ans[1] );
        // cout<<ans[0]<<" "<<ans[1]<<endl;
      }
   }
   return 0;
}