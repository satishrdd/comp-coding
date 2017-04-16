#include<bits/stdc++.h>


using namespace std;
#define ll long long
const long double pi = acos(-1.0);


int main(int argc, char const *argv[])
{
   /* code */
   ll n,a,ocount=0,osum=0,esum=0;
   cin>>n;
   ll mi=9999999999;
   for(int i=0;i<n;i++){
      cin>>a;
      if(a%2==0){
         esum+=a;
      }else{
         osum+=a;
         ocount++;
         mi = min(mi,a);
      }
   }
   if(ocount%2!=0){
      esum = esum + osum - mi;
   }else{
      esum = esum+osum;
   }
   cout<<esum<<endl;
   return 0;   
}