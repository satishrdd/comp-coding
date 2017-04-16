#include<bits/stdc++.h>


using namespace std;
typedef unsigned long long ll;
int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  string curr,home,temp;
  cin>>n;
  cin>>home;
  int count=0;
  for(int i=0;i<n;i++){
    cin>>temp;
    if(temp.substr(0,3)==home){
      count++;
    }
    if(temp.substr(5,3)==home){
      count--;
    }
  }
  if(count==0){
    cout<<"home"<<endl;
  }else{
    cout<<"contest"<<endl;
  }
  return 0;

}