#include<bits/stdc++.h>


using namespace std;
long long temp = 100000000000000;


int main(int argc, char const *argv[])
{
   /* code */
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   map<long long,bool> ma;
   map<long long ,long long>ma1;
   long long n,k;
   cin>>n>>k;
   long long i=0,sz=0; 
   long long temp1=1;
   long long rem[51];
   while(true){
      if(k==1){
         rem[0]=1;sz=1;
         break;
      }else if (k==-1){
         rem[0]=-1;rem[1]=1;sz=2;break;
      }
      if(i>=1){
         temp1=temp1*k;
      }

     // cout<<temp1<<endl;
      if(temp1<=temp){
         rem[i]=temp1;
      }else{
         sz=i;
         break;
      }
      i++;
      if(i==49){
         sz=i;
         break;
      }
   }
   //cout<<sz<<endl;
   long long ar[n],dp[n],count=0;
   for(int i=0;i<n;i++){
      cin>>ar[i];
      if(i==0){
         dp[i]=ar[i];
      }else{
         dp[i]=dp[i-1]+ar[i];
      }
     
      for(int j=0;j<sz;j++){
       //  cout<<dp[i]<<endl;
         if(rem[j]==dp[i])
            {count++;break;}
      }
      
      for(int j=0;j<sz;j++) {
         long long t =rem[j];
         if( ma1[dp[i]-t]){
            count= count+ma1[dp[i]-t];
         //   cout<<dp[i]<<" "<<t<<endl;
            if(k==1){
               break;
            }
         }
      }
       ma1[dp[i]]++;

   }

   cout<<count<<endl;
   return 0;
}