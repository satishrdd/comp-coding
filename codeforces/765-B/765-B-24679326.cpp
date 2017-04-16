#include<bits/stdc++.h>


using namespace std;
typedef unsigned long long ll;
int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  int count=0;
  cin>>s;
  for(int i=0;i<s.length();i++){
    if(s[i]-'a'==count){
      count++;
    }else if(s[i]-'a'>count){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;

}