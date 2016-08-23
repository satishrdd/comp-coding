#include<iostream>
#include<cstring>
#include<stdio.h>
#include<set>
using namespace std;


int main(int argc, char const *argv[])
{
  /* code */


long long n;
cin>>n;
string s;
long long res[n];

cin>>s;
for(int i=0;i<n;i++){
  cin>>res[i];
}
int flag=0;
long long min=res[n-1]-res[0];
for(int i=0;i<n-1;i++){
  if(s[i]=='R'&&s[i+1]=='L'){
    flag =1;
    long long val = (res[i+1] - res[i])/2;
    if(val<min){
      min = val;
    }
  }
}
if(flag==0){
  min=-1;
}

cout<<min<<endl;
  return 0;

}