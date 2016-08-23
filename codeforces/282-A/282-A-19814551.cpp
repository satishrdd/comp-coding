#include<iostream>


using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  int n=0;
  string s;
  int k;
  cin>>k;
  while(k--){
 cin>>s;
if((s[0]=='+'&&s[1]=='+')||(s[1]=='+'&&s[2]=='+')){
  n++;
}else if((s[0]=='-'&&s[1]=='-')||(s[1]=='-'&&s[2]=='-')){
  n--;

}}
cout<<n<<endl;
  return 0;


}