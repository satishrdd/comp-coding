#include<iostream>
#include <sstream>
#include<cstring>
#include<algorithm>
 
using namespace std;
 
template <typename T>
  string NumberToString ( T Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }
 
 
 
int main(){
 
int k,base;
long long a;
cin>>a>>base>>k;
for(int i=0;i<k;i++){
	cout<<a%(base+1)<<" ";
	a = a/(base+1);
}
cout<<endl;
return 0;
} 
