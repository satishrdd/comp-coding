#include<bits/stdc++.h>


using namespace std;
#define ll long long
#define mod 1073741824
const long double pi = acos(-1.0);


vector<string> ve;

void recur(string s,int fc,int sc){
   if(fc+sc<=10){
      if(fc==sc){
         ve.push_back(s);
      }
         recur(s+'4',fc+1,sc);
         recur(s+'7',fc,sc+1);
      
   }else{
      return;
   }
   return;
}

int main(int argc, char const *argv[])
{
   recur("4",1,0);
   recur("7",0,1);
   vector<long long> res;
   for(int i=0;i<ve.size();i++){
      res.push_back(stoll(ve[i]));
   }
   sort(res.begin(),res.end());
   ll n;
   cin>>n;
   // for(int i=0;i<res.size();i++){
      
   // }
   vector<ll>::iterator it = lower_bound(res.begin(),res.end(),n);
   cout<<res[it-res.begin()]<<endl;
   return 0;   
}