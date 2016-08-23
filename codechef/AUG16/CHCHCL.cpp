#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
	// your code goes here
	int cases;
	cin>>cases;
	while(cases--){
	    long long a,b;
	    cin>>a>>b;
	    if((a*b/__gcd(a,b))%2==0){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
 

