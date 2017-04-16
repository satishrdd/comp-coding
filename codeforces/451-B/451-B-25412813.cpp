#include <bits/stdc++.h>
using namespace std;




int main()
{
  int n,l=-1,r=-1;
  cin>>n;
  int ar[n],br[n];
  for(int i=0;i<n;i++){
    cin>>ar[i];
    br[i]=ar[i];
  }
  sort(br,br+n);
  int flag=0;
  for(int i=0;i<n;i++){
    if(flag==0){
      if(ar[i]!=br[i]){
        flag=1;
        l=i;
      }
    }else{
      if(ar[i]!=br[i]){
        r=i;
      }
    }
  }

  //cout<<l<<" "<<r<<endl;
  if(l==-1){
    if(r==-1){
      cout<<"yes\n1 1"<<endl;
      return 0;
    }
  }
  // for(int i=0;i<n;i++){
  //   cout<<ar[i]<<" \n"[i==n-1];
  // }
  reverse(ar+l,ar+r+1);
  // for(int i=0;i<n;i++){
  //   cout<<ar[i]<<" \n"[i==n-1];
  // }
  for(int i=0;i<n;i++){
    if(ar[i]!=br[i]){
      cout<<"no"<<endl;
      return 0;
    }
  }
  cout<<"yes\n"<<l+1<<" "<<r+1<<endl;
  return 0;
}