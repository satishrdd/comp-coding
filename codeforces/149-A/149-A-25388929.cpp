#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  //cout.precision(20);
  long long n;
  cin>>n;
  ll ar[12];
  for(int i=0;i<12;i++){
      cin>>ar[i];
  }
  ll count=0,sum=0;
  sort(ar,ar+12);
  if(n==0){
   cout<<0<<endl;
  }else{
    for(int i=11;i>=0;i--){
        sum =sum+ar[i];
        count++;
        if(sum>=n){
            break;
        }
        if(i==0 && sum<n){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<count<<endl;
  }
  return 0;
}