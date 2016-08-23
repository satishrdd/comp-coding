#include<iostream>
#include<cstring>
#include<stdio.h>
#include<set>
using namespace std;


int main(int argc, char const *argv[])
{
  /* code */



long long m,n;
cin>>n>>m;
long long res =n*n;

bool l1[n+1];
bool l2[n+1];
memset(l1,0,sizeof(l1));
memset(l2,0,sizeof(l2));

long long a =n,b=n;
while(m--){
long long x,y,c=0,d=0;
cin>>x>>y;
if(!l1[x]){
  l1[x]=1;
  res= res-a;
  c=1;
}
b = b-c;
if(!l2[y]){
  l2[y]=1;
  res = res-b;
  d=1;
}
a = a -d;

cout<<res<<endl;

  }
  return 0;

}