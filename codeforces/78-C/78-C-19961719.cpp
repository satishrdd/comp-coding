#include<iostream>
#include <algorithm>
#include <cmath>
#define mod 1000000000
#define maxn 1003
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)
int ncr[maxn][maxn];


int main(int argc, char const *argv[])
{
  /* code */
int cases,n,m,k;
cin>>n>>m>>k;
int flag=0;   ///marsel win for flag0
if(n%2==0){
  ;
}else if((n%2==1 && k==1 && m!=1)){
  flag=1;
}else{
  for(int i=2;i<=sqrt(m);i++){
    if(m%i==0){
      if(i>=k||m/(i)>=k)
      {
        flag=1;
        break;
      }
    }
  }
}

if(flag==0){
  cout<<"Marsel"<<endl;
}else{
  cout<<"Timur"<<endl;
}

return 0;

}