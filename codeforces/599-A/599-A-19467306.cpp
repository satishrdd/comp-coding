#include<iostream>
#include<cstring>
#include<stdio.h>
#include<set>
using namespace std;


int main(int argc, char const *argv[])
{
  /* code */
  long long d1,d2,d3;
  cin>>d1>>d2>>d3;
  cout<<min(d1,d2)+min(min(d1,d2)+max(d1,d2),d3)+min(max(d1,d2),d3+min(d1,d2))<<endl;
   


  return 0;

}