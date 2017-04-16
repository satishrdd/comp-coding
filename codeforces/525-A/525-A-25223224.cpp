#include<bits/stdc++.h>


using namespace std;
#define ll long long
#define mod 1073741824
const long double pi = acos(-1.0);




int main(int argc, char const *argv[])
{
   int cnt[26]={0};
   string s;
   int n,res=0;
   cin>>n>>s;
   for(int i=0;i<2*n-2;i++){
      if((s[i]>='a') && (s[i]<='z')){
         cnt[s[i]-'a']++;
      }else{
         if(cnt[s[i]-'A']>0){
            cnt[s[i]-'A']--;
         }else{
            res++;
         }
      }
   }
   cout<<res<<endl;
   return 0;   
}