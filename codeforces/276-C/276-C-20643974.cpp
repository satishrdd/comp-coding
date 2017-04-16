#include<bits/stdc++.h>

#define int long long
using namespace std;

signed main()
{
  /* code */
 long long n,k;
 cin>>n>>k;
 long long ar[n],b[n]={0},val[n];
 for(int i=0;i<n;i++){
  cin>>ar[i];
 }

 sort(ar,ar+n);
 long long x,y;
 while(k--){
  cin>>x>>y;
  x--;
  y--;
  b[x]++;
  if(y+1<n){
    b[y+1]--;
  }
 }
val[0] = b[0];
 for(int i=1;i<n;i++){
  val[i] = b[i] + val[i-1];
 }

 sort(val,val+n);
 long long res =0;
 for(int i=0;i<n;i++){
  res+=ar[i]*val[i];
 }

 cout<<res<<endl;


  return 0;
}