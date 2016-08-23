#include<iostream>
#include<cstring>
#include<stdio.h>
#include<set>
using namespace std;


int main(int argc, char const *argv[])
{
  /* code */


int n,d;
cin>>n>>d;
int count =0;
string s ="";
for(int i=0;i<n;i++){
  s = s + '1';
}
int maxcount=0;
string r;
while(d--){
  cin>>r;
 
  if(r==s){
    count=0;
  }
  else{
    count++;
  }
   if(count>maxcount){
    maxcount = count;
  }
}
cout<<maxcount<<endl;
  return 0;

}