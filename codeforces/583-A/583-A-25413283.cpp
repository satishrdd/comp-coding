#include <bits/stdc++.h>
using namespace std;




int main()
{
  int n,x,y;
  map<int,bool> ma;
  map<int,bool> ma1;
  cin>>n;
  for(int i=1;i<=n*n;i++){
    cin>>x>>y;
    if(!(ma[x]||ma1[y])){
      cout<<i<<" ";
      ma[x]=true;
      ma1[y]=true;
    }
  }
  cout<<endl;
  return 0;
}