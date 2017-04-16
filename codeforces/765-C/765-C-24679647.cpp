#include<bits/stdc++.h>


using namespace std;
typedef unsigned long long ll;
int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long k,a,b;
  cin>>k>>a>>b;
  long long res = a/k + b/k;
  if(res==0){
    cout<<-1<<endl;
  }else{
    if(a>=k && b>=k){
      cout<<res<<endl;
    }else if(a>=k){
      if(a%k!=0){
        cout<<-1<<endl;
      }else{
        cout<<a/k<<endl;
      }
    }else if(b>=k){
      if(b%k!=0){
        cout<<-1<<endl;
      }else{
        cout<<b/k<<endl;
      }
    }
  }
  return 0;

}