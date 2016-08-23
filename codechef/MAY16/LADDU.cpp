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
int activities;
string native;
long long sum=0;
string s;
int temp;
while(cases--){
	sum=0;
	cin>>activities>>native;
	while(activities--){
		cin>>s;
		if(s=="CONTEST_WON"){
			cin>>temp;
			sum = sum +300;
			if(temp<=20){
				sum = sum + 20-temp;
			}
		}else if(s=="TOP_CONTRIBUTOR"){
			sum = sum+300;
		}else if(s=="BUG_FOUND"){
			cin>>temp;
			sum = sum + temp;
		}else if(s=="CONTEST_HOSTED"){
			sum = sum +50;
		}
	}
 
	if(native=="INDIAN"){
		cout<<sum/200<<endl;
	}else if(native=="NON_INDIAN"){
		cout<<sum/400<<endl;
	}
}
return 0;
} 
