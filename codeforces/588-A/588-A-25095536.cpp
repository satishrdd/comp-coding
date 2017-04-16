#include<bits/stdc++.h>


using namespace std;
int main(int argc, char const *argv[])
{
   /* code */
   long n;
   cin>>n;
   int t1,t2,p;
   long long res=0;
   for(int i=0;i<n;i++){
      cin>>t1>>t2;
      if(i==0){
         p=t2;
      }else{
         p = min(p,t2);
      }
      res+=t1*p;

   }
   cout<<res<<endl;
   return 0;
}