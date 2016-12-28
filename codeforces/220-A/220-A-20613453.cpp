#include<bits/stdc++.h>


using namespace std;

signed main()
{
  /* code */
 int n;
 cin>>n;
 long ar[n],b[n];
 for(int i=0;i<n;i++){
  cin>>ar[i];
  b[i]= ar[i];
 }

 sort(b,b+n);
 int count =0;
 for(int i=0;i<n;i++){
  if(ar[i]!=b[i]){
    count++;
  }
if(count>2){
  cout<<"NO"<<endl;
  return 0;
}
 }

 if(count==2||count==0){
  cout<<"YES"<<endl;
 }else{
  cout<<"NO"<<endl;
 }
  return 0;
}