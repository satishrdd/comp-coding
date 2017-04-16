#include <bits/stdc++.h>
using namespace std;




int main()
{
  string s1,s2;
  cin>>s1>>s2;
  int flag=0;
  for(int i=s1.length()-1;i>=0;i--){
    if(flag==0){
      if(s1[i]=='z'){
        s1[i]='a';
      }else{
        flag=1;
        s1[i] =s1[i]+1; 
      }
    }
  }
  if(flag){
    if(s1<s2)
      cout<<s1<<endl;
    else{
      cout<<"No such string\n";  
    }
  }else{
    cout<<"No such string\n";
  }
  return 0;
}