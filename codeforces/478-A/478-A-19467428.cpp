#include<iostream>
#include<cstring>
#include<stdio.h>
#include<set>
using namespace std;


int main(int argc, char const *argv[])
{
  /* code */
  long long d1,d2,d3,d4,d5;
  cin>>d1>>d2>>d3>>d4>>d5;

  if((d1+d2+d3+d4+d5)%5==0&&(d1+d2+d3+d4+d5)!=0){
    cout<<(d1+d2+d3+d4+d5)/5<<endl;
  }else{
    cout<<-1<<endl;
  }

   


  return 0;

}