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
 
int cases,n,m;
cin>>cases;
while(cases--){
	cin>>n;
	long long ar[n];
	
	for(int i=0;i<n;i++){
		cin>>ar[i];
		
	}
	sort(ar,ar+n);
	long long temp=ar[1]-ar[0];
	for(int i=1;i<n-1;i++)
            {
                if(ar[i+1]-ar[i]<temp)
                    temp=ar[i+1]-ar[i];
            }
 
 
	cout<<temp<<endl;
}
return 0;
} 
