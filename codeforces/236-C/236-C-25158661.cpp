#include<bits/stdc++.h>


using namespace std;
#define ll long long
#define mod 1073741824
const long double pi = acos(-1.0);


int main(int argc, char const *argv[])
{
   /* code */
   ll n;
   cin>>n;
   if(n<=2){cout<<n<<endl;}
   else{
      if(n%2==1)
         cout<<n*(n-1)*(n-2)<<endl;
      else{
         if(__gcd(n,n-3)==1){
            cout<<n*(n-1)*(n-3)<<endl;
         }else{
            cout<<(n-2)*(n-1)*(n-3)<<endl;
         }
      }
   }
   return 0;   
}