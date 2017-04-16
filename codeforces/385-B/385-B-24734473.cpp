#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  //cout.precision(20);
  string s;
  cin>>s;
  ll count=0,temp=0;
  if(s.length()>3)
  for(int i=0;i<s.length()-3;i++){
    if(s.substr(i,4)=="bear"){
            temp= i+1;
    }
    count+=temp;
  }
  cout<<count<<endl;
  return 0;
}