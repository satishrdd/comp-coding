#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  //cout.precision(20);
  long long n;
  string a,b;
  cin>>n>>a>>b;
  if(b=="week"){
    if(n==5 || n==6){
        cout<<53<<endl;
    }else{
        cout<<52<<endl;
    }
  }else{
    if(n<=29){
        cout<<12<<endl;
    }else if(n<=30){
        cout<<11<<endl;
    }else{
        cout<<7<<endl;
    }
  }
  return 0;
}