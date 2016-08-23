#include<iostream>
#include <sstream>
#include<cstring>
 
using namespace std;
 
template <typename T>
  string NumberToString ( T Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }
 
 
 
int main(){
 
int a,b;
cin>>a>>b;
int c = a-b;
if(c==1){
	cout<<2<<endl;
}else if(c%10==9){
	cout<<c-1<<endl;
}else{
	cout<<c+1<<endl;
}
return 0;
} 
