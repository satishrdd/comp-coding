#include<bits/stdc++.h>


using namespace std;
#define ll long long
#define mod 1073741824
const long double pi = acos(-1.0);


int main(int argc, char const *argv[])
{
   /* code */
   ll a,b,c;
   cin>>a>>b>>c;
   int ar[a*b*c+1]={0};
   ll res=0;
   for(int i=1;i<=a*b*c;i++){
      for(int j=i;j<=a*b*c;j=j+i){
         ar[j]++;
         ar[j]%=mod;
      }
   }   

   for(int i=1;i<=a;i++){
      for(int j=1;j<=b;j++){
         for(int k=1;k<=c;k++){
            res = res + ar[i*j*k];
            res = res % mod;
         }
      }
   }
   cout<<res%mod<<endl;
   return 0;   
}