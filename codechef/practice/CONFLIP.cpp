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
 
int games,cases,i,q,k,base;
cin>>cases;
long long n;
while(cases--){
	cin>>games;
	while(games--){
		cin>>i>>n>>q;
		if(i==q){
			cout<<n/2<<endl;
		}else {
			cout<<n- (n/2)<<endl;
		}
	}
}
return 0;
} 
