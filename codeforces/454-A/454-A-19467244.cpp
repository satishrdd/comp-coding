#include<iostream>
#include<cstring>
#include<stdio.h>
#include<set>
using namespace std;


int main(int argc, char const *argv[])
{
  /* code */
  
  int n;
  cin>>n;
  for(int i=0;i<n/2;i++){
    for(int j=0;j<(n/2-i);j++){
      cout<<"*";
    }
    for(int j=0;j<2*i+1;j++){
      cout<<"D";
    }
    for(int j=0;j<(n/2-i);j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i=0;i<n;i++){
    cout<<"D";
  }
  cout<<endl;
for(int i=(n/2)-1;i>=0;i--){
    for(int j=0;j<(n/2-i);j++){
      cout<<"*";
    }
    for(int j=0;j<2*i+1;j++){
      cout<<"D";
    }
    for(int j=0;j<(n/2-i);j++){
      cout<<"*";
    }
    cout<<endl;
  }

   


  return 0;

}