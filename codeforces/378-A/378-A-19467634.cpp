#include<iostream>
#include<cstring>
#include<stdio.h>
#include<set>
#include<cmath>
using namespace std;


int main(int argc, char const *argv[])
{
  /* code */
  int a,b;
  cin>>a>>b;
  int count1=0,count2=0,count3=0;
  for(int i=1;i<=6;i++){
    if(abs(a-i)>abs(b-i)){
      count1++;
    }else if(abs(a-i)==abs(b-i)){
      count2++;
    }else if(abs(a-i)<abs(b-i)){
      count3++;
    }
  }

cout<<count3<<" "<<count2<<" "<<count1<<endl;
   


  return 0;

}