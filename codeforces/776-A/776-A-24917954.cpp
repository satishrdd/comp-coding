#include<bits/stdc++.h>


using namespace std;


int main(int argc, char const *argv[])
{
   /* code */
  string s,s3,s1,s2;
  cin>>s1>>s2;
  long long n;
  cin>>n;
  cout<<s1<<" "<<s2<<endl;
  while(n--){
   cin>>s>>s3;
   if(s==s1){
      s1=s3;
   }else if(s==s2){
      s2=s3;
   }
   cout<<s1<<" "<<s2<<endl;
  }
   return 0;
}