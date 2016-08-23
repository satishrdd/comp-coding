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
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>k;
	long long val = arr[k-1];
	//cout<<val<<endl;
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(val==arr[i]){
			cout<<i+1<<endl;
			break;
		}
	}
}
return 0;
} 
