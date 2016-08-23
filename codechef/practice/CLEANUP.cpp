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
 
int cases,n,m;
cin>>cases;
while(cases--){
	cin>>n>>m;
	int ar[n],temp;
	for(int i=0;i<n;i++){
		ar[i]=0;
	}
	for(int i=0;i<m;i++){
		cin>>temp;
		ar[temp-1]=1;
	}
 
	string a ="",b="";
	int j=0;
	for(int i=0;i<n;i++){
		if(ar[i]==0){
			if(j%2==0){
				a = a + NumberToString(i+1);
				a = a + " ";
			}else{
				b = b + NumberToString(i+1);
				b = b + " ";
			}
			j++;
		}
	}
 
 
 
	cout<<a<<endl<<b<<endl;
}
return 0;
} 
