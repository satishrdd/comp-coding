#include<iostream>


using namespace std;

int main(int argc, char const *argv[])
{
  /* code */
  int n;
  cin>>n;
  int count=0;
  int a,b,c;
  while(n--){
  cin>>a>>b>>c;
  if(a+b+c>=2){
    count++;
  }
}
cout<<count<<endl;
  return 0;
}