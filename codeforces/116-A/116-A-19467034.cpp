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
  int maxneeded =0;
  int curr=0;
  while(n--){
    int x,y;
    cin>>x>>y;
    curr = curr+y-x;
    if(curr>maxneeded){
      maxneeded = curr;
    }
  }
cout<<maxneeded<<endl;

  return 0;

}