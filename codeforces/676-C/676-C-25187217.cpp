#include<bits/stdc++.h>


using namespace std;
#define ll long long
#define mod 1073741824
const long double pi = acos(-1.0);


int main(int argc, char const *argv[])
{
   /* code */
   ll n,k,ml=0;
   cin>>n>>k;
   string s;
   cin>>s;
   int ac[s.length()]={0};
   int bc[s.length()]={0};
   ll l=0,r=0;
   if(s[0]=='a'){
      ac[0]=0;bc[0]=1;
   }else{
      ac[0]=1;bc[0]=0;
   }
   for(int i=1;i<s.length();i++){
      if(s[i]=='a'){
         ac[i]=ac[i-1];
         bc[i] = bc[i-1]+1;
      }else{
         ac[i]=ac[i-1]+1;
         bc[i] = bc[i-1];
      }
   }
   int temp=0;
   while(r!=n){
      if(l>r){
         r++;
         continue;
      }
      if(s[l]=='b'){
         temp=1;
      }else{
         temp=0;
      }
      if((ac[r]-ac[l]+temp)<=k){
         ml = max(ml,r-l+1);
         //cout<<ml<<" "<<l<<" "<<r<<endl;
         r++;
      }else{
         l++;
      }
      
   }
   l=0,r=0;
   while(r!=n){
      if(l>r){
         r++;
         continue;
      }
      if(s[l]=='a'){
         temp=1;
      }else{
         temp=0;
      }
      if((bc[r]-bc[l]+temp)<=k){
         ml = max(ml,r-l+1);
//         cout<<ml<<" "<<l<<" "<<r<<endl;
         r++;
      }else{
         l++;
      }
      
   }
   cout<<ml<<endl;
   return 0;   
}