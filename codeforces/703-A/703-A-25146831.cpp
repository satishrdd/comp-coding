#include<bits/stdc++.h>


using namespace std;
#define ll long long
const long double pi = acos(-1.0);


int main(int argc, char const *argv[])
{
   /* code */
   ll n,a,b;
   ll c1=0,c2=0;
   cin>>n;
   for(int i=0;i<n;i++){cin>>a>>b;if(a>b){c1++;}else if(a<b){c2++;}}
   if(c1>c2){cout<<"Mishka\n";}else if(c2>c1){cout<<"Chris\n";}else {cout<<"Friendship is magic!^^\n";}
   //cout<<<<endl;  
   return 0;
}