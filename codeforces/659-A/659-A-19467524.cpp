#include<iostream>
#include<cstring>
#include<stdio.h>
#include<set>
using namespace std;


int main(int argc, char const *argv[])
{
  /* code */
  int n,a,b;
  cin>>n>>a>>b;
  cout<<((a+b-1)%n+n)%n+1<<endl;

   


  return 0;

}