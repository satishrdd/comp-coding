#include<iostream>
#include<cstring>
#include<stdio.h>
#include<set>
using namespace std;


int main(int argc, char const *argv[])
{
  /* code */
  int n,h;
  cin>>n>>h;
  int x,res=0;
  while(n--){
    cin>>x;
    if(x>h){
      res+=2;
    }else{
      res+=1;
    }

  }
  cout<<res<<endl;

   


  return 0;

}