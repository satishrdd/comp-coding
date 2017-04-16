#include<bits/stdc++.h>


using namespace std;
#define ll long long
#define mod 1073741824
const long double pi = acos(-1.0);


int main(int argc, char const *argv[])
{
   ll n,x,y;
   cin>>n>>x>>y;
   int temp = 0;
   if((y*n)%100 > 0){
      temp=1;
   }
   cout<<max(((y*n/100)+temp)-x,0LL)<<endl;
   return 0;   
}