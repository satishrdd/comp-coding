#include<iostream>
#include<cstring>
#include<stdio.h>
#include<set>
using namespace std;


int main(int argc, char const *argv[])
{
  /* code */
  
  int a[26],b[26];
  memset(a,0,sizeof(a));
  memset(b,0,sizeof(b));
  string s1,s2,s3;
  cin>>s1>>s2>>s3;
  for(int i=0;i<s1.length();i++){
    a[s1[i]-'A']++;
  }
  for(int i=0;i<s2.length();i++){
    a[s2[i]-'A']++;
  }
  for(int i=0;i<s3.length();i++){
    b[s3[i]-'A']++;
  }


  for(int i=0;i<26;i++){
    if(a[i]!=b[i]){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES\n";
  return 0;

}